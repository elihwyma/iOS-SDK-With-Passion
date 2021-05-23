/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIKBTree;

__attribute__((visibility("hidden")))
@interface UIKBKeyInterval : NSObject

{
    UIKBTree *_key;
    double _interval;
}

@property (retain, nonatomic) UIKBTree *key;
@property (nonatomic) double interval;

- (void)dealloc;
- (id)initWithKey:(id)arg1 interval:(double)arg2;

@end
