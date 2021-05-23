/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSPData, TSUFlushingManager;

@interface TSDImageProvider : NSObject

{
    int mLoadState;
    TSPData *mImageData;
    TSUFlushingManager *mFlushingManager;
    int mInterest;
    struct os_unfair_lock_s mInterestLock;
    struct atomic<int> mRetainCount;
    struct atomic<int> mOwnerCount;
}

@property (nonatomic, readonly) unsigned long long imageGamut;

+ (id)allocWithZone:(struct _NSZone *)arg1;

- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (_Bool)isValid;
- (id).cxx_construct;
- (void)flush;
- (id)initWithImageData:(id)arg1;
- (id)imageData;
- (struct CGSize)naturalSize;
- (int)interest;
- (_Bool)isError;
- (void)addInterest;
- (void)removeInterest;
- (void)drawImageInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)flushIfInterestLessThan:(int)arg1;
- (struct CGSize)dpiAdjustedNaturalSize;
- (void)i_commonInit;
- (_Bool)hasFlushableContent;
- (void)setFlushingManager:(id)arg1;
- (void)addOwner;
- (void)removeOwner;
- (void)ownerAccess;

@end
