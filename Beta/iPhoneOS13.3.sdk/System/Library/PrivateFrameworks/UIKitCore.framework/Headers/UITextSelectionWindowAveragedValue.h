/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UITextSelectionWindowAveragedValue : NSObject

{
    unsigned long long _depth;
    NSMutableArray *_values;
}

- (void)addValue:(double)arg1;
- (id)initWithDepth:(unsigned long long)arg1;
- (void)flushValues;
- (double)windowAveragedValue;

@end
