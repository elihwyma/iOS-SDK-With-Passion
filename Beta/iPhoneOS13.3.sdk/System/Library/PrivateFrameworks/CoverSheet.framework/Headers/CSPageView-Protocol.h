/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

@class UIViewController;

@protocol CSPageViewControllerProtocol;

@protocol CSPageView

@property (weak, nonatomic) UIViewController<CSPageViewControllerProtocol> *pageViewController;
@property (nonatomic) double contentWidth;

@end
