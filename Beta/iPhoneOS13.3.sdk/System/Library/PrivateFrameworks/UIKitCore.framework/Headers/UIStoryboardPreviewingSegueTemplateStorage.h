/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UIStoryboardPreviewingSegueTemplate, UIStoryboardSegueTemplate, UIView;

__attribute__((visibility("hidden")))
@interface UIStoryboardPreviewingSegueTemplateStorage : NSObject <Swift>

{
    UIView *_sender;
    UIStoryboardPreviewingSegueTemplate *_previewTemplate;
    UIStoryboardSegueTemplate *_commitTemplate;
}

@property (weak, nonatomic) UIView *sender;
@property (weak, nonatomic) UIStoryboardPreviewingSegueTemplate *previewTemplate;
@property (weak, nonatomic) UIStoryboardSegueTemplate *commitTemplate;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
