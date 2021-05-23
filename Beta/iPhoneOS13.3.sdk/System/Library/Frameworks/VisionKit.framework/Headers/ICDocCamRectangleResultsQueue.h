/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ICDocCamRectangleResultsQueue : NSObject

{
    NSMutableArray *_array;
}

@property (retain, nonatomic) NSMutableArray *array;

- (id)init;
- (void)clear;
- (long long)size;
- (id)peek;
- (id)dequeue;
- (void)enqueue:(id)arg1;
- (void)apply:(CDUnknownBlockType)arg1 fromIndex:(long long)arg2 toIndex:(unsigned long long)arg3;
- (id)peek:(long long)arg1;
- (id)peekTail;
- (void)apply:(CDUnknownBlockType)arg1 atIndex:(long long)arg2;

@end
