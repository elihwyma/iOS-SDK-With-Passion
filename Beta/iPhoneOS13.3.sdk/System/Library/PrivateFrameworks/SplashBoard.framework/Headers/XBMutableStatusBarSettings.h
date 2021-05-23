/*
 Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

#import <SplashBoard/XBStatusBarSettings.h>

@interface XBMutableStatusBarSettings : XBStatusBarSettings

@property (nonatomic, getter=isHidden) _Bool hidden;
@property (nonatomic) long long style;
@property (nonatomic, getter=isBackgroundActivityEnabled) _Bool backgroundActivityEnabled;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
