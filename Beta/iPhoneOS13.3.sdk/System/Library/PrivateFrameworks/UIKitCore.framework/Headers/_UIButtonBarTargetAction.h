/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface _UIButtonBarTargetAction : NSObject

{
    UIBarButtonItem *_barButtonItem;
    CDUnknownBlockType _actionFilter;
}

@property (nonatomic, readonly) UIBarButtonItem *barButtonItem;
@property (copy, nonatomic) CDUnknownBlockType actionFilter;
@property (nonatomic, readonly) SEL proxyAction;

- (id)init;
- (id)initWithBarButtonItem:(id)arg1;
- (void)_invoke:(id)arg1 forEvent:(id)arg2;

@end
