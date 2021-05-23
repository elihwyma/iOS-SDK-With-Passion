/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardHome/SBDownloadingIcon.h>

@class SBCalendarIconImageProvider;

@interface SBCalendarDownloadingIcon : SBDownloadingIcon

{
    SBCalendarIconImageProvider *_imageProvider;
}

@property (nonatomic, readonly) SBCalendarIconImageProvider *imageProvider;

+ (_Bool)canGenerateIconsInBackground;

- (void)localeChanged;
- (id)initWithDownloadingIconDataSource:(id)arg1;
- (id)unmaskedIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (void)calendarIconImageProviderHasChanged:(id)arg1;

@end
