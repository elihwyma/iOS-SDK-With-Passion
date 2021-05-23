/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSNumber, NSString, NSURL;

@interface SAMPCreateRadioStation : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *assetInfo;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSNumber *startPlaying;
@property (copy, nonatomic) NSURL *stationUrl;

+ (id)createRadioStation;
+ (id)createRadioStationWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
