/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSMutableIndexSet;

@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface SCNFixedSizePage : NSObject

{
    id <MTLBuffer> _buffer;
    unsigned long long _elementSize;
    NSMutableIndexSet *_freeIndices;
}

@property (nonatomic, readonly) id <MTLBuffer> buffer;

- (void)dealloc;
- (_Bool)isFull;
- (void)deallocateElementAtOffset:(unsigned long long)arg1;
- (unsigned long long)_allocateElement;
- (id)initWithBuffer:(id)arg1 elementSize:(unsigned long long)arg2;
- (_Bool)hasFreeElementsLeft;
- (id)newSubBuffer;

@end
