/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SALCMContent.h>

@class NSURL;

@interface SALCMSportingEvent : SALCMContent

@property (copy, nonatomic) NSURL *sportingEventId;

+ (id)sportingEvent;
+ (id)sportingEventWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
