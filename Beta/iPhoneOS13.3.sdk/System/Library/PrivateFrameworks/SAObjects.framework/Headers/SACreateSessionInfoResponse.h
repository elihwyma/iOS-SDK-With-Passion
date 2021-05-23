/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSData, NSNumber;

@interface SACreateSessionInfoResponse : SABaseClientBoundCommand

@property (copy, nonatomic) NSData *sessionInfo;
@property (copy, nonatomic) NSNumber *validityDuration;

+ (id)createSessionInfoResponse;
+ (id)createSessionInfoResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
