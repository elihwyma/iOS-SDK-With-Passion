/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIAlertControllerDescriptor : NSObject

{
    _Bool _hasHeaderContentViewController;
    _Bool _hasTitle;
    _Bool _hasMessage;
    _Bool _hasContentViewController;
    _Bool _applicationIsFullscreen;
    long long _numberOfActions;
    struct UIEdgeInsets _containerViewSafeAreaInsets;
}

@property _Bool hasHeaderContentViewController;
@property _Bool hasTitle;
@property _Bool hasMessage;
@property _Bool hasContentViewController;
@property long long numberOfActions;
@property _Bool applicationIsFullscreen;
@property struct UIEdgeInsets containerViewSafeAreaInsets;

- (_Bool)isEqual:(id)arg1;

@end
