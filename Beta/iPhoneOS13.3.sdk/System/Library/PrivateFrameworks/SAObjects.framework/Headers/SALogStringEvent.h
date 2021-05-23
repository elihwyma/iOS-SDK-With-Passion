/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SALogStringEvent : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *eventValue;

+ (id)logStringEvent;
+ (id)logStringEventWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
