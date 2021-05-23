/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBApplicationIcon.h>

@class SBCalendarIconImageProvider;

@interface SBCalendarApplicationIcon : SBApplicationIcon

{
    SBCalendarIconImageProvider *_imageProvider;
}

@property (nonatomic, readonly) SBCalendarIconImageProvider *imageProvider;

+ (Class)downloadingIconClass;
+ (_Bool)canGenerateIconsInBackground;

- (id)initWithApplication:(id)arg1;
- (void)localeChanged;
- (id)unmaskedIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (void)calendarIconImageProviderHasChanged:(id)arg1;

@end
