/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@interface EKDayOccurrenceStringGenerator : NSObject

+ (double)minNaturalTextHeightForEvent:(id)arg1 usingSmallText:(_Bool)arg2 sizeClass:(long long)arg3;
+ (double)minimumNaturalHeightForPrimaryTextUsingSmallText:(_Bool)arg1 sizeClass:(long long)arg2;
+ (double)attributedStringMinimumLineHeightUsingSmallText:(_Bool)arg1 sizeClass:(long long)arg2;
+ (double)_minimumPrimaryFontLineHeightUsingSmallText:(_Bool)arg1 sizeClass:(long long)arg2;
+ (id)_attributedTitleWithState:(id)arg1;
+ (id)_attributedTimeWithState:(id)arg1;
+ (id)_attributedLocationWithState:(id)arg1;
+ (id)_attributedStatusWithState:(id)arg1;
+ (id)_defaultAttributesForState:(id)arg1;
+ (double)_defaultMinimumLineHeightForState:(id)arg1;

- (id)generateTravelTimeStringWithState:(id)arg1;
- (id)generateContentStringWithState:(id)arg1;

@end
