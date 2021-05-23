/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/Swift-Protocol.h>

@class NSArray, NSData, NSString, _SFPBGraphicalFloat, _SFPBImage, _SFPBLatLng, _SFPBPunchout, _SFPBURL;

@protocol _SFPBActionItem <Swift>

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

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addStoreIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)clearStoreIdentifiers;
- (unsigned short)storeIdentifiersCount;
- (unsigned short)storeIdentifiersAtIndex: /* Error: Ran out of types for this method. */;

@end
