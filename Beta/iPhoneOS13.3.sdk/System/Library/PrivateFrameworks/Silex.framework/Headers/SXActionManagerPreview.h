/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class UIViewController;

@protocol SXAction, SXActionPreviewActivity;

@interface SXActionManagerPreview : NSObject

{
    id <SXAction> _action;
    id <SXActionPreviewActivity> _previewActivity;
    UIViewController *_viewController;
}

@property (nonatomic, readonly) id <SXAction> action;
@property (nonatomic, readonly) id <SXActionPreviewActivity> previewActivity;
@property (weak, nonatomic, readonly) UIViewController *viewController;

- (id)initWithAction:(id)arg1 viewController:(id)arg2 previewActivity:(id)arg3;

@end
