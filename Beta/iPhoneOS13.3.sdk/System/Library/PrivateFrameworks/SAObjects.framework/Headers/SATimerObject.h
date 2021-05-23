/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSNumber, NSString;

@interface SATimerObject : SADomainObject

@property (copy, nonatomic) NSNumber *isFiring;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSNumber *timerValue;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *type;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
