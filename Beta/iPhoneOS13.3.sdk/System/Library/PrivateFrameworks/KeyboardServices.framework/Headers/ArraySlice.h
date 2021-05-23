/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <Foundation/NSArray.h>

@interface ArraySlice : NSArray

{
    NSArray *_array;
    unsigned long long _offset;
    unsigned long long _count;
}

- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)initWithArray:(id)arg1 offset:(unsigned long long)arg2 count:(unsigned long long)arg3;

@end
