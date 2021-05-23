/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString, SAMPCollection;

@interface SAMPAddMediaItemsToUpNextQueue : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSString *insertLocation;
@property (retain, nonatomic) SAMPCollection *mediaCollection;
@property (copy, nonatomic) NSString *musicAccountSharedUserId;
@property (copy, nonatomic) NSString *speakerSharedUserId;

+ (id)addMediaItemsToUpNextQueue;
+ (id)addMediaItemsToUpNextQueueWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
