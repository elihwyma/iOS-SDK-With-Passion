/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class SAClockObject;

@interface SAClockAdd : SADomainCommand

@property (retain, nonatomic) SAClockObject *clockToAdd;

+ (id)add;
+ (id)addWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
