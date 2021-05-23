/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class UIContextMenuInteraction, UIView;

@protocol VUIContextMenuTemplateControllerInterface;

__attribute__((visibility("hidden")))
@interface VUIActiveInteractionView : NSObject

{
    UIView *_highlightedView;
    UIContextMenuInteraction *_activeInteraction;
    id <VUIContextMenuTemplateControllerInterface> _templateInterface;
}

@property (weak, nonatomic) UIView *highlightedView;
@property (weak, nonatomic) UIContextMenuInteraction *activeInteraction;
@property (weak, nonatomic) id <VUIContextMenuTemplateControllerInterface> templateInterface;

+ (id)sharedInstance;

@end
