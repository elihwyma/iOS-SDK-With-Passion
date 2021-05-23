/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL, SFImage, SFLatLng, SFPunchout;

@protocol SFActionItem <Swift>

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

@end
