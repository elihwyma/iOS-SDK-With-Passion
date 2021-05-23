/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SACFAbstractClientCommandCompleted.h>

@interface SACFProviderCompleted : SACFAbstractClientCommandCompleted

+ (id)providerCompleted;
+ (id)providerCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
