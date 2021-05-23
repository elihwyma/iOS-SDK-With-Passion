/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STUsageGroupSpecifierProvider.h>

@class NSTimer;

__attribute__((visibility("hidden")))
@interface STTestGroupSpecifierProvider : STUsageGroupSpecifierProvider

{
    _Bool _isHidden;
    NSTimer *_timer;
}

@property (retain, nonatomic) NSTimer *timer;

- (id)init;
- (void)dealloc;
- (_Bool)isHidden;
- (void)setIsHidden:(_Bool)arg1;
- (void)timerFired:(id)arg1;

@end
