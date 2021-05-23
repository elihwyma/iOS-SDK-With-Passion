/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/Swift-Protocol.h>

@class UIView;

@protocol AVTPresenterDelegate;

@protocol AVTObjectViewController <Swift>

@property (nonatomic, readonly) UIView *view;
@property (weak, nonatomic) id <AVTPresenterDelegate> presenterDelegate;

@end
