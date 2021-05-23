/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, UIResponder;

__attribute__((visibility("hidden")))
@interface _UIResponder_Override_Host : NSObject

{
    NSMutableArray *_overrides;
    UIResponder *_owner;
}

@property (weak, nonatomic, readonly) UIResponder *owner;

+ (id)hostForResponder:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)attachOverrider:(id)arg1 forTypes:(long long)arg2;
- (void)detachOverrider:(id)arg1 forTypes:(long long)arg2;
- (long long)typesForResponder:(id)arg1;

@end
