/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestTagRequest : NSObject

{
    long long _requestType;
    UIView *_view;
}

@property (nonatomic, readonly) long long requestType;
@property (nonatomic, readonly) UIView *view;

- (id)initWithRequestType:(long long)arg1 view:(id)arg2;

@end
