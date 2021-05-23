/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/SFActionItem.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL, SFImage, SFLatLng, SFPunchout;

@interface SFMediaOffer : SFActionItem <Swift>

{
    struct {
        unsigned int isEnabled:1;
    } _has;
    _Bool _isEnabled;
    SFActionItem *_actionItem;
    NSString *_sublabel;
    NSString *_offerIdentifier;
    SFImage *_image;
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
@property (retain, nonatomic) SFActionItem *actionItem;
@property (copy, nonatomic) NSString *sublabel;
@property (copy, nonatomic) NSString *offerIdentifier;
@property (nonatomic) _Bool isEnabled;
@property (retain, nonatomic) SFImage *image;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (_Bool)hasIsEnabled;

@end
