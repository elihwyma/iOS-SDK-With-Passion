/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/WFCalendarAccessResource.h>

@interface WFReminderAccessResource : WFCalendarAccessResource

+ (unsigned long long)entityType;
+ (_Bool)isSystemResource;

- (id)associatedAppIdentifier;
- (id)protectedResourceDescription;

@end
