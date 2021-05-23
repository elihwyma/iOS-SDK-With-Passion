/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber;

@interface SAMPLoadQP : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSNumber *startPlaying;

+ (id)loadQP;
+ (id)loadQPWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
