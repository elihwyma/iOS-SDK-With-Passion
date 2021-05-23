/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSCoverSheetViewBase.h>

@class UIViewController;

@protocol CSPageViewControllerProtocol;

@interface CSPageViewBase : CSCoverSheetViewBase

{
    UIViewController<CSPageViewControllerProtocol> *_pageViewController;
    double _contentWidth;
}

@property (weak, nonatomic) UIViewController<CSPageViewControllerProtocol> *pageViewController;
@property (nonatomic) double contentWidth;

@end
