/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPContainedObject.h>

@class NSString, TSTTableHeaderStorageBucket;

@interface TSTTableHeaderStorage : TSPContainedObject

{
    TSTTableHeaderStorageBucket *mBuckets[1];
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (long long)count;
- (id)initWithOwner:(id)arg1;
- (void)removeHeaderForKey:(unsigned int)arg1;
- (void)setHeader:(id)arg1 forKey:(unsigned int)arg2;
- (unsigned int)maxKey;
- (id)headerForKey:(unsigned int)arg1 willModify:(_Bool)arg2 createIfNotThere:(_Bool)arg3;
- (void)shiftKeysAtIndex:(unsigned int)arg1 amount:(int)arg2;
- (void)applyFunction:(CDUnknownFunctionPointerType)arg1 withState:(void *)arg2 willModify:(_Bool)arg3;
- (id)headerForKey:(unsigned int)arg1 willModify:(_Bool)arg2;
- (void)removeAllHeaders;
- (void)makeHeadersPerformSelector:(SEL)arg1 willModify:(_Bool)arg2;
- (unsigned int)minKey;
- (unsigned int)upperBound:(unsigned int)arg1;
- (unsigned int)lowerBound:(unsigned int)arg1;

@end
