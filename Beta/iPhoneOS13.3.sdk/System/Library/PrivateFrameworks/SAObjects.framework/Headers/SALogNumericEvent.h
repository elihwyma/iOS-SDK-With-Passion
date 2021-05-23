/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString;

@interface SALogNumericEvent : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *eventOperation;
@property (copy, nonatomic) NSNumber *eventValue;

+ (id)logNumericEvent;
+ (id)logNumericEventWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
