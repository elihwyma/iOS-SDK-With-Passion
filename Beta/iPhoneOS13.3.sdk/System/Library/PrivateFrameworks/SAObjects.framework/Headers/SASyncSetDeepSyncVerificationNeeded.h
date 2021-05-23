/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SASyncSetDeepSyncVerificationNeeded : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *keys;

+ (id)setDeepSyncVerificationNeeded;
+ (id)setDeepSyncVerificationNeededWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
