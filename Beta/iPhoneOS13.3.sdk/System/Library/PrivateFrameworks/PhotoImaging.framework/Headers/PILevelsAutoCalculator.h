/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/NUAutoCalculator.h>

@class NSString;

@interface PILevelsAutoCalculator : NUAutoCalculator

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) CDStruct_1b6d18a9 time;

- (void)submit:(CDUnknownBlockType)arg1;
- (id)calculateSettingsForImageHistogram:(id)arg1;
- (id)calculateSettingsForSingleChannelHistogram:(id)arg1 suffix:(id)arg2;

@end
