/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIMenu, UIViewController;

@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface _UIFulfilledContextMenuConfiguration : NSObject

{
    id <NSCopying> _identifier;
    UIViewController *_previewViewController;
    UIMenu *_actions;
}

@property (copy, nonatomic) id <NSCopying> identifier;
@property (retain, nonatomic) UIViewController *previewViewController;
@property (copy, nonatomic) UIMenu *actions;

- (_Bool)isPresentable;

@end
