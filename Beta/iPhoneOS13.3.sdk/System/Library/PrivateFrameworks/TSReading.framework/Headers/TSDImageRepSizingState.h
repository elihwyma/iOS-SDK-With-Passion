/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSDImageProvider;

@interface TSDImageRepSizingState : NSObject

{
    struct CGSize mDesiredSize;
    TSDImageProvider *mProvider;
    struct CGPath *mMaskPath;
    _Bool mIncludesAdjustments;
    _Bool mWideGamutCanvas;
    int mStatus;
    struct CGImage *mSizedImage;
    long long mSizedImageOrientation;
}

@property (nonatomic) struct CGSize desiredSize;
@property (nonatomic, readonly) _Bool wideGamut;
@property (retain, nonatomic) TSDImageProvider *provider;
@property (nonatomic) int status;
@property (nonatomic) struct CGImage *sizedImage;
@property (nonatomic, readonly) _Bool sizedImageHasMask;
@property (nonatomic) long long sizedImageOrientation;
@property (nonatomic, readonly) struct CGPath *maskPath;
@property (nonatomic) _Bool sizedImageIncludesAdjustments;

- (void)dealloc;
- (id)initWithDesiredSize:(struct CGSize)arg1 provider:(id)arg2 maskPath:(struct CGPath *)arg3 wideGamutCanvas:(_Bool)arg4;
- (void)generateSizedImage;

@end
