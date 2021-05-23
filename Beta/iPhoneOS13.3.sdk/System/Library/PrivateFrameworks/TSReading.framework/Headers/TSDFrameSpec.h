/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@class NSBundle, NSMutableDictionary, NSString;

@interface TSDFrameSpec : NSObject <Swift>

{
    NSBundle *mBundle;
    NSString *mFrameName;
    double mLeftInset;
    double mRightInset;
    double mTopInset;
    double mBottomInset;
    struct CGPoint mAdornmentPosition;
    double mMinimumAssetScale;
    int mTilingMode;
    _Bool mDisplayInPicker;
    _Bool mHasImages;
    _Bool mHasMask;
    _Bool mHasAdornment;
    NSMutableDictionary *mProvidersByKey;
    _Bool mLoadedImageMetrics;
    double mLeftWidth;
    double mRightWidth;
    double mTopHeight;
    double mBottomHeight;
    struct CGSize mAdornmentSize;
    int mInterest;
}

@property (copy, nonatomic, readonly) NSString *frameName;
@property (nonatomic, readonly) _Bool displayInPicker;

+ (id)frameSpecWithName:(id)arg1;
+ (id)frameSpecs;
+ (id)p_imageKeys;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)i_minimumAssetScale;
- (_Bool)i_hasMask;
- (_Bool)i_hasImages;
- (double)i_leftInset;
- (double)i_rightInset;
- (double)i_bottomInset;
- (double)i_topInset;
- (_Bool)i_hasAdornment;
- (struct CGPoint)i_adornmentPosition;
- (double)i_leftWidth;
- (double)i_rightWidth;
- (double)i_topHeight;
- (double)i_bottomHeight;
- (struct CGSize)i_adornmentSize;
- (id)initWithBundle:(id)arg1 isVolatile:(_Bool)arg2;
- (id)p_infoDictionary;
- (id)i_providerForIndex:(int)arg1 mask:(_Bool)arg2;
- (id)p_imageDataForKey:(id)arg1;
- (void)p_loadImageMetrics;
- (void)i_addInterestInProviders;
- (void)i_removeInterestInProviders;
- (int)i_tilingMode;

@end
