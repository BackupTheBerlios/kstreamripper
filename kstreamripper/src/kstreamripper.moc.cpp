/****************************************************************************
** KStreamRipper meta object code from reading C++ file 'kstreamripper.h'
**
** Created: Mon Oct 6 13:06:17 2003
**      by: The Qt MOC ($Id: kstreamripper.moc.cpp,v 1.1 2003/10/07 08:47:20 tuxipuxi Exp $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "kstreamripper.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *KStreamRipper::className() const
{
    return "KStreamRipper";
}

QMetaObject *KStreamRipper::metaObj = 0;
static QMetaObjectCleanUp cleanUp_KStreamRipper( "KStreamRipper", &KStreamRipper::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString KStreamRipper::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "KStreamRipper", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString KStreamRipper::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "KStreamRipper", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* KStreamRipper::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = KStreamRipperBase::staticMetaObject();
    static const QUMethod slot_0 = {"browseButtonClicked", 0, 0 };
    static const QUMethod slot_1 = {"addStreamButtonClicked", 0, 0 };
    static const QUMethod slot_2 = {"deleteStreamButtonClicked", 0, 0 };
    static const QUMethod slot_3 = {"tuneInButtonClicked", 0, 0 };
    static const QUMethod slot_4 = {"ripButtonClicked", 0, 0 };
    static const QUMethod slot_5 = {"stopRipButtonClicked", 0, 0 };
    static const QUParameter param_slot_6[] = {
	{ 0, &static_QUType_ptr, "AddNewStreamImpl", QUParameter::In }
    };
    static const QUMethod slot_6 = {"addStreamFinished", 1, param_slot_6 };
    static const QUMethod slot_7 = {"readStdout", 0, 0 };
    static const QUMethod slot_8 = {"setEmptyText", 0, 0 };
    static const QUMethod slot_9 = {"quitButtonClicked", 0, 0 };
    static const QUMethod slot_10 = {"aboutButtonClicked", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "browseButtonClicked()", &slot_0, QMetaData::Protected },
	{ "addStreamButtonClicked()", &slot_1, QMetaData::Protected },
	{ "deleteStreamButtonClicked()", &slot_2, QMetaData::Protected },
	{ "tuneInButtonClicked()", &slot_3, QMetaData::Protected },
	{ "ripButtonClicked()", &slot_4, QMetaData::Protected },
	{ "stopRipButtonClicked()", &slot_5, QMetaData::Protected },
	{ "addStreamFinished(AddNewStreamImpl*)", &slot_6, QMetaData::Protected },
	{ "readStdout()", &slot_7, QMetaData::Protected },
	{ "setEmptyText()", &slot_8, QMetaData::Protected },
	{ "quitButtonClicked()", &slot_9, QMetaData::Protected },
	{ "aboutButtonClicked()", &slot_10, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"KStreamRipper", parentObject,
	slot_tbl, 11,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_KStreamRipper.setMetaObject( metaObj );
    return metaObj;
}

void* KStreamRipper::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "KStreamRipper" ) )
	return this;
    return KStreamRipperBase::qt_cast( clname );
}

bool KStreamRipper::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: browseButtonClicked(); break;
    case 1: addStreamButtonClicked(); break;
    case 2: deleteStreamButtonClicked(); break;
    case 3: tuneInButtonClicked(); break;
    case 4: ripButtonClicked(); break;
    case 5: stopRipButtonClicked(); break;
    case 6: addStreamFinished((AddNewStreamImpl*)static_QUType_ptr.get(_o+1)); break;
    case 7: readStdout(); break;
    case 8: setEmptyText(); break;
    case 9: quitButtonClicked(); break;
    case 10: aboutButtonClicked(); break;
    default:
	return KStreamRipperBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool KStreamRipper::qt_emit( int _id, QUObject* _o )
{
    return KStreamRipperBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool KStreamRipper::qt_property( int id, int f, QVariant* v)
{
    return KStreamRipperBase::qt_property( id, f, v);
}

bool KStreamRipper::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
