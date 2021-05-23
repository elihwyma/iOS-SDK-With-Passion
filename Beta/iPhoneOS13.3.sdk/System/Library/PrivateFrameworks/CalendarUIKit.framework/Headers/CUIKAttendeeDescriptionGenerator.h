/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <CalendarUIKit/CUIKDescriptionGenerator.h>

@interface CUIKAttendeeDescriptionGenerator : CUIKDescriptionGenerator

+ (id)sharedGenerator;
+ (id)displayNameForIdentity:(id)arg1;
+ (id)displayNameForIdentity:(id)arg1 outFirstName:(id *)arg2 outLastName:(id *)arg3;
+ (id)displayNameForParticipant:(id)arg1 event:(id)arg2 options:(unsigned long long)arg3;

@end
