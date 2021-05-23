/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIResponder;

__attribute__((visibility("hidden")))
@interface _UIResponder_Override : NSObject

{
    UIResponder *_owner;
    UIResponder *_target;
    long long _types;
}

@property (weak, nonatomic, readonly) UIResponder *owner;
@property (weak, nonatomic, readonly) UIResponder *target;
@property (nonatomic, readonly) long long types;

+ (id)overrideForResponder:(id)arg1 withTarget:(id)arg2 forType:(long long)arg3;

- (void)dealloc;
- (id)description;

@end
