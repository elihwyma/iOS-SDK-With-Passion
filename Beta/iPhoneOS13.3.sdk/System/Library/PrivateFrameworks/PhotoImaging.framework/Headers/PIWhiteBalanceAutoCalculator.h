/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/NUAutoCalculator.h>

@class NSString;

@interface PIWhiteBalanceAutoCalculator : NUAutoCalculator

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) CDStruct_1b6d18a9 time;

- (void)submit:(CDUnknownBlockType)arg1;
- (_Bool)_useTempTint:(CDStruct_145c54d4)arg1;
- (CDStruct_145c54d4)_correctedRGBResultFromResult:(CDStruct_145c54d4)arg1;
- (CDStruct_145c54d4)_chooseNeutralGrayForNonSushi:(CDStruct_92960315)arg1;
- (CDStruct_c3b9c2ee)_chooseTempTintForSushi:(CDStruct_92960315)arg1 RAWProperties:(id)arg2 brightness:(double)arg3;

@end
