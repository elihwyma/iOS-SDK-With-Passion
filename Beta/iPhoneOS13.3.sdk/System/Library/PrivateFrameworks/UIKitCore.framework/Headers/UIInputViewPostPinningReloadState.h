/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIResponder;

__attribute__((visibility("hidden")))
@interface UIInputViewPostPinningReloadState : NSObject

{
    UIResponder *_responderPreventedFromSettingInputViews;
}

@property (retain, nonatomic) UIResponder *responderToReload;

+ (id)stateWithResponder:(id)arg1;

- (void)dealloc;

@end
