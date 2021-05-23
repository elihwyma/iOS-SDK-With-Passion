/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@interface PHAJobConstraints : NSObject

{
    _Bool _canRunAutomaticBackgroundAnalysis;
    _Bool _canRunAutomaticForegroundAnalysis;
    _Bool _canRunUserInitiatedForegroundAnalysis;
    _Bool _canUseNetwork;
    _Bool _turboMode;
    _Bool _cancelsTurboMode;
}

@property (nonatomic, getter=isTurboMode) _Bool turboMode;
@property (nonatomic) _Bool cancelsTurboMode;
@property (nonatomic, readonly) _Bool canRunAutomaticBackgroundAnalysis;
@property (nonatomic, readonly) _Bool canRunAutomaticForegroundAnalysis;
@property (nonatomic, readonly) _Bool canRunUserInitiatedForegroundAnalysis;
@property (nonatomic, readonly) _Bool canUseNetwork;

+ (id)constraintsWithNoAllowances;
+ (id)constraintsWithAllAllowances;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToConstraints:(id)arg1;
- (id)initWithCanRunAutomaticBackgroundAnalysis:(_Bool)arg1 canRunAutomaticForegroundAnalysis:(_Bool)arg2 canRunUserInitiatedForegroundAnalysis:(_Bool)arg3 canUseNetwork:(_Bool)arg4;
- (id)initFromBitString:(id)arg1;
- (id)asBitString;
- (void)applyConstraints:(id)arg1 usingMask:(id)arg2;
- (unsigned int)qosClassForProcessing;
- (id)statusAsDictionary;

@end
