/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | www.openfoam.com
     \\/     M anipulation  |
-------------------------------------------------------------------------------
    Copyright (C) 2019-2021 OpenCFD Ltd.
    Copyright (C) YEAR AUTHOR, AFFILIATION
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

\*---------------------------------------------------------------------------*/

#include "functionObjectTemplate.H"
#define namespaceFoam  // Suppress <using namespace Foam;>
#include "fvCFD.H"
#include "unitConversion.H"
#include "addToRunTimeSelectionTable.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{

// * * * * * * * * * * * * * * Static Data Members * * * * * * * * * * * * * //

defineTypeNameAndDebug(rhoVolumeFunctionObject, 0);

addRemovableToRunTimeSelectionTable
(
    functionObject,
    rhoVolumeFunctionObject,
    dictionary
);


// * * * * * * * * * * * * * * * Global Functions  * * * * * * * * * * * * * //

// dynamicCode:
// SHA1 = 019b51ea21bef9595ebf8486f379142298755c47
//
// unique function name that can be checked if the correct library version
// has been loaded
extern "C" void rhoVolume_019b51ea21bef9595ebf8486f379142298755c47(bool load)
{
    if (load)
    {
        // Code that can be explicitly executed after loading
    }
    else
    {
        // Code that can be explicitly executed before unloading
    }
}


// * * * * * * * * * * * * * * * Local Functions * * * * * * * * * * * * * * //

//{{{ begin localCode

//}}} end localCode

} // End namespace Foam


// * * * * * * * * * * * * * Private Member Functions  * * * * * * * * * * * //

const Foam::fvMesh&
Foam::rhoVolumeFunctionObject::mesh() const
{
    return refCast<const fvMesh>(obr_);
}


// * * * * * * * * * * * * * * * * Constructors  * * * * * * * * * * * * * * //

Foam::
rhoVolumeFunctionObject::
rhoVolumeFunctionObject
(
    const word& name,
    const Time& runTime,
    const dictionary& dict
)
:
    functionObjects::regionFunctionObject(name, runTime, dict)
{
    read(dict);
}


// * * * * * * * * * * * * * * * * Destructor  * * * * * * * * * * * * * * * //

Foam::
rhoVolumeFunctionObject::
~rhoVolumeFunctionObject()
{}


// * * * * * * * * * * * * * * * Member Functions  * * * * * * * * * * * * * //

bool
Foam::
rhoVolumeFunctionObject::read(const dictionary& dict)
{
    if (false)
    {
        printMessage("read rhoVolume");
    }

//{{{ begin code
    
//}}} end code

    return true;
}


bool
Foam::
rhoVolumeFunctionObject::execute()
{
    if (false)
    {
        printMessage("execute rhoVolume");
    }

//{{{ begin code
    
//}}} end code

    return true;
}


bool
Foam::
rhoVolumeFunctionObject::write()
{
    if (false)
    {
        printMessage("write rhoVolume");
    }

//{{{ begin code
    #line 114 "/home/parallels/Documents/openfoam/compressible/twoSimpleRotors/system/controlDict/functions/rhoVol"
const auto& rho = mesh().lookupObject<volScalarField>("rho");

            Info<< "rho volume = " << rho.weightedAverage(mesh().Vsc()) << endl;
//}}} end code

    return true;
}


bool
Foam::
rhoVolumeFunctionObject::end()
{
    if (false)
    {
        printMessage("end rhoVolume");
    }

//{{{ begin code
    
//}}} end code

    return true;
}


// ************************************************************************* //

