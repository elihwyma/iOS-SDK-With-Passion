/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSString, TSDImageProvider, TSPObjectContext;

@interface TSDImageResamplingOperation : NSObject

{
    TSDImageProvider *mImageProvider;
    struct CGSize mDesiredSize;
    NSString *mDisplayName;
    struct CGPath *mMaskingPath;
    TSPObjectContext *mObjectContext;
}

@property (retain, nonatomic) TSDImageProvider *imageProvider;
@property (nonatomic) struct CGSize desiredSize;
@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) TSPObjectContext *objectContext;
@property (nonatomic) struct CGPath *maskingPath;

- (id)init;
- (void)dealloc;
- (id)initWithImageProvider:(id)arg1 desiredSize:(struct CGSize)arg2;
- (id)performResampleOperationWithResampleOptions:(unsigned long long)arg1 bitmapContextOptions:(unsigned long long)arg2;

@end
