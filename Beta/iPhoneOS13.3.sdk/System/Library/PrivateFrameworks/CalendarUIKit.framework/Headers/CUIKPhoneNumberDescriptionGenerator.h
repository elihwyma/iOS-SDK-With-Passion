/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <CalendarUIKit/CUIKDescriptionGenerator.h>

@interface CUIKPhoneNumberDescriptionGenerator : CUIKDescriptionGenerator

+ (id)sharedGenerator;
+ (id)normalizedPhoneNumber:(id)arg1;

- (id)formattedStringForPhoneNumber:(id)arg1;
- (id)formattedStringForTelURL:(id)arg1;

@end
