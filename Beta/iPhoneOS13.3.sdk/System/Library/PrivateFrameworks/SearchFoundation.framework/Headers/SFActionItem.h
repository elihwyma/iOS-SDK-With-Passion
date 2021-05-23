/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <Foundation/NSObject.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL, SFImage, SFLatLng, SFPunchout;

@interface SFActionItem : NSObject <Swift>

{
    struct {
        unsigned int isOverlay:1;
        unsigned int requiresLocalMedia:1;
        unsigned int latitude:1;
        unsigned int longitude:1;
        unsigned int isITunes:1;
        unsigned int mediaEntityType:1;
    } _has;
    _Bool _isOverlay;
    _Bool _requiresLocalMedia;
    _Bool _isITunes;
    int _mediaEntityType;
    NSString *_label;
    NSString *_labelForLocalMedia;
    NSArray *_storeIdentifiers;
    NSString *_localMediaIdentifier;
    SFPunchout *_punchout;
    NSString *_applicationBundleIdentifier;
    NSString *_contactIdentifier;
    NSString *_phoneNumber;
    NSString *_email;
    NSData *_mapsData;
    double _latitude;
    double _longitude;
    NSString *_provider;
    NSString *_offerType;
    NSString *_type;
    NSString *_labelITunes;
    SFImage *_icon;
    SFImage *_baseIcon;
    SFLatLng *_location;
    NSString *_messageIdentifier;
    NSURL *_messageURL;
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
@property (retain, nonatomic) SFPunchout *punchout;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSData *mapsData;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (copy, nonatomic) NSString *provider;
@property (copy, nonatomic) NSString *offerType;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *labelITunes;
@property (nonatomic) _Bool isITunes;
@property (retain, nonatomic) SFImage *icon;
@property (retain, nonatomic) SFImage *baseIcon;
@property (retain, nonatomic) SFLatLng *location;
@property (copy, nonatomic) NSString *messageIdentifier;
@property (copy, nonatomic) NSURL *messageURL;
@property (copy, nonatomic) NSString *persistentID;
@property (nonatomic) int mediaEntityType;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSData *jsonData;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasLatitude;
- (_Bool)hasLongitude;
- (id)initWithProtobuf:(id)arg1;
- (_Bool)hasIsOverlay;
- (_Bool)hasRequiresLocalMedia;
- (_Bool)hasIsITunes;
- (_Bool)hasMediaEntityType;

@end
