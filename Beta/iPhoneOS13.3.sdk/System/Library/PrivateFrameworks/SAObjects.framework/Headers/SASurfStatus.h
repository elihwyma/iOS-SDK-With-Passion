/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SASurfStatus : SADomainObject

@property (copy, nonatomic) NSString *currentState;

+ (id)surfStatus;
+ (id)surfStatusWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
