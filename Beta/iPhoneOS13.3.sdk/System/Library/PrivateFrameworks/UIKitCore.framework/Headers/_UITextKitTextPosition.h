/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextPosition.h>

__attribute__((visibility("hidden")))
@interface _UITextKitTextPosition : UITextPosition

{
    long long _offset;
    long long _affinity;
}

@property long long offset;
@property long long affinity;

+ (id)positionWithOffset:(long long)arg1;
+ (id)positionWithOffset:(long long)arg1 affinity:(long long)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end
