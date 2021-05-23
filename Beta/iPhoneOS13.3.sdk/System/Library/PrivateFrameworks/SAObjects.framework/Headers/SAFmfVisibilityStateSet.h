/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@interface SAFmfVisibilityStateSet : SADomainCommand

@property (nonatomic) _Bool visible;

+ (id)visibilityStateSet;
+ (id)visibilityStateSetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
