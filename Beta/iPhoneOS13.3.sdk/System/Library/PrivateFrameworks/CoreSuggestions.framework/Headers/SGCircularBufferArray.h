/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SGCircularBufferArray : NSObject

{
    NSMutableArray *_backingStore;
    unsigned long long _currentIndex;
    unsigned long long _capacity;
    unsigned long long _mutationDetector;
}

- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)addObject:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)allObjects;

@end
