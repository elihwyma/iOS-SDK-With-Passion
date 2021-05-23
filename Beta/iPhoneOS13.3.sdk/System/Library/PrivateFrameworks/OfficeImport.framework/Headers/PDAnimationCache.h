/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString, PDAnimateMotionBehavior, PDAnimationTarget, PDBuild;

__attribute__((visibility("hidden")))
@interface PDAnimationCache : NSObject

{
    int mNodeType;
    int mPresetId;
    int mPresetSubType;
    int mPresetClass;
    PDAnimationTarget *mTarget;
    _Bool mHasDelay;
    double mDelay;
    _Bool mHasDuration;
    double mDuration;
    _Bool mHasDirection;
    double mDirection;
    _Bool mHasPartCount;
    int mPartCount;
    PDAnimateMotionBehavior *mMotionPath;
    _Bool mHasValue;
    double mValue;
    PDBuild *mBuild;
    int mIterateType;
    _Bool mIsHead;
    int mLevel;
    NSString *mGroupId;
}

@property (retain, nonatomic) PDAnimationTarget *target;
@property (nonatomic) int nodeType;
@property (nonatomic) int presetId;
@property (nonatomic) int presetSubType;
@property (nonatomic) int presetClass;
@property (nonatomic) int iterateType;
@property (nonatomic) _Bool hasDelay;
@property (nonatomic) double delay;
@property (nonatomic) _Bool hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) _Bool hasDirection;
@property (nonatomic) double direction;
@property (nonatomic) _Bool hasPartCount;
@property (nonatomic) int partCount;
@property (retain, nonatomic) PDAnimateMotionBehavior *motionPath;
@property (nonatomic) _Bool hasValue;
@property (nonatomic) double value;
@property (retain, nonatomic) NSString *groupId;
@property (nonatomic) _Bool isHead;
@property (nonatomic) int level;
@property (retain, nonatomic) PDBuild *build;

+ (void)mapCommonData:(id)arg1 cacheData:(id)arg2 state:(id)arg3;
+ (void)loadAnimationCache:(id)arg1 pdAnimation:(id)arg2 state:(id)arg3;
+ (id)createAnimationInfoDataForCacheItem:(id)arg1 order:(unsigned int)arg2;
+ (void)mapAnimationInfo:(id)arg1 cacheData:(id)arg2 state:(id)arg3;

- (id)initWithAnimationInfo:(id)arg1;

@end
