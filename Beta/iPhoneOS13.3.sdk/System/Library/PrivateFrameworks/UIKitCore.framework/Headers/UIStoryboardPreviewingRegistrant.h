/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIStoryboardPreviewingSegueTemplateStorage, UIView, UIViewController;

@protocol UIViewControllerPreviewing;

__attribute__((visibility("hidden")))
@interface UIStoryboardPreviewingRegistrant : NSObject <Swift>

{
    id <UIViewControllerPreviewing> _previewingContext;
    UIStoryboardPreviewingSegueTemplateStorage *_segueTemplateStorage;
    UIViewController *_viewController;
    UIView *_sourceView;
}

@property (weak, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) UIView *sourceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (void)registerForPreviewing;
- (void)unregisterForPreviewing;

@end
