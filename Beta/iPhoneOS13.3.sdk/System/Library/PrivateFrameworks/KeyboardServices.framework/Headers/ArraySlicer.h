/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface ArraySlicer : NSObject

{
    unsigned long long _sliceSize;
    unsigned long long _count;
    unsigned long long _offset;
    NSArray *_array;
}

@property (nonatomic, readonly) unsigned long long remaining;

- (id)initWithArray:(id)arg1 sliceSize:(unsigned long long)arg2;
- (id)nextSlice;
- (id)unconsumed;
- (id)consumed;

@end
