/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBGraphicalFloat, _SFPBImage, _SFPBLatLng, _SFPBPunchout, _SFPBURL;

@interface _SFPBActionItem : PBCodable <Swift>

{
    _Bool _isOverlay;
    _Bool _requiresLocalMedia;
    _Bool _isITunes;
    int _mediaEntityType;
    NSString *_label;
    NSString *_labelForLocalMedia;
    NSArray *_storeIdentifiers;
    NSString *_localMediaIdentifier;
    _SFPBPunchout *_punchout;
    NSString *_applicationBundleIdentifier;
    NSString *_contactIdentifier;
    NSString *_phoneNumber;
    NSString *_email;
    NSData *_mapsData;
    _SFPBGraphicalFloat *_latitude;
    _SFPBGraphicalFloat *_longitude;
    NSString *_provider;
    NSString *_offerType;
    NSString *_type;
    NSString *_labelITunes;
    _SFPBImage *_icon;
    _SFPBImage *_baseIcon;
    _SFPBLatLng *_location;
    NSString *_messageIdentifier;
    _SFPBURL *_messageURL;
    NSString *_persistentID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *labelForLocalMedia;
@property (nonatomic) _Bool isOverlay;
@property (copy, nonatomic) NSArray *storeIdentifiers;
@property (nonatomic) _Bool requiresLocalMedia;
@property (copy, nonatomic) NSString *localMediaIdentifier;
@property (retain, nonatomic) _SFPBPunchout *punchout;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSData *mapsData;
@property (retain, nonatomic) _SFPBGraphicalFloat *latitude;
@property (retain, nonatomic) _SFPBGraphicalFloat *longitude;
@property (copy, nonatomic) NSString *provider;
@property (copy, nonatomic) NSString *offerType;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *labelITunes;
@property (nonatomic) _Bool isITunes;
@property (retain, nonatomic) _SFPBImage *icon;
@property (retain, nonatomic) _SFPBImage *baseIcon;
@property (retain, nonatomic) _SFPBLatLng *location;
@property (copy, nonatomic) NSString *messageIdentifier;
@property (retain, nonatomic) _SFPBURL *messageURL;
@property (copy, nonatomic) NSString *persistentID;
@property (nonatomic) int mediaEntityType;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)addStoreIdentifiers:(id)arg1;
- (void)clearStoreIdentifiers;
- (unsigned long long)storeIdentifiersCount;
- (id)storeIdentifiersAtIndex:(unsigned long long)arg1;

@end
