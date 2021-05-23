/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPObject.h>

@class NSString;

@interface TSTTableHeaderStorageBucket : TSPObject

{
    struct map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject>>>> *mMap;
    double mHorizontalScaleFactor;
}

@property (nonatomic) double horizontalScaleFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (long long)count;
- (id)initWithContext:(id)arg1;
- (void)removeHeaderForKey:(unsigned int)arg1;
- (void)setHeader:(id)arg1 forKey:(unsigned int)arg2;
- (id)packageLocator;
- (unsigned long long)flushableSize;
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
