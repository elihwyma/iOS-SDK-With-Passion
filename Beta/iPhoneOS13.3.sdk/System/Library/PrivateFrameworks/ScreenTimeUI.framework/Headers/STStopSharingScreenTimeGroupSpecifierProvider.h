/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

@class PSSpecifier;

__attribute__((visibility("hidden")))
@interface STStopSharingScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider

{
    PSSpecifier *_stopSharingScreenTimeSpecifier;
}

@property (retain, nonatomic) PSSpecifier *stopSharingScreenTimeSpecifier;

- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (void)disableScreenTime:(id)arg1;
- (void)confirmStopSharingScreenTime:(id)arg1;

@end
