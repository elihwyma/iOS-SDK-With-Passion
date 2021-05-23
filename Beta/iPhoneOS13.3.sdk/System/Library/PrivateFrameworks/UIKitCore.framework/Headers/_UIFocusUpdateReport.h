/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIFocusSystem, UIFocusUpdateContext;

__attribute__((visibility("hidden")))
@interface _UIFocusUpdateReport : NSObject

{
    UIFocusSystem *_focusSystem;
    UIFocusUpdateContext *_context;
}

@property (weak, nonatomic, readonly) UIFocusSystem *focusSystem;
@property (retain, nonatomic) UIFocusUpdateContext *context;
@property (nonatomic, readonly) _Bool shouldLog;

- (id)init;
- (id)initWithFocusSystem:(id)arg1;

@end
