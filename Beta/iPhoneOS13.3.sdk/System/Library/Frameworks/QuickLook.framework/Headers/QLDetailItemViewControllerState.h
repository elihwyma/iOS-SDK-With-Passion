/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class NSString, UIView;

@interface QLDetailItemViewControllerState : NSObject

{
    _Bool _informationVisible;
    NSString *_actionButtonTitle;
    UIView *_actionButtonView;
}

@property (retain) NSString *actionButtonTitle;
@property (retain) UIView *actionButtonView;
@property (getter=isInformationVisible) _Bool informationVisible;

+ (id)detailItemViewControllerStateWithActionButtonTitle:(id)arg1 actionButtonView:(id)arg2 informationVisible:(_Bool)arg3;

@end
