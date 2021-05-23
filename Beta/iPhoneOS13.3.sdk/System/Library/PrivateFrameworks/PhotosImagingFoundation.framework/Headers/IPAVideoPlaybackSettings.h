/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <PhotosImagingFoundation/IPAEditDescription.h>

@interface IPAVideoPlaybackSettings : IPAEditDescription

{
    CDStruct_1b6d18a9 _naturalDuration;
}

@property (nonatomic, readonly) CDStruct_1b6d18a9 naturalDuration;

+ (void)initialize;
+ (Class)expectedOperationClass;
+ (id)playbackSettingsForAdjustments:(id)arg1;
+ (Class)operationClassForIdentifier:(id)arg1;
+ (id)presetifyAdjustmentStack:(id)arg1;

- (id)debugDescription;
- (_Bool)isEqualToDescription:(id)arg1;
- (id)initWithOperations:(id)arg1;
- (CDStruct_e83c9415)naturalPlaybackRange;
- (CDStruct_1b6d18a9)scaledTimeFromNaturalTime:(CDStruct_1b6d18a9)arg1;
- (id)descriptionByInsertingOrReplacingOperation:(id)arg1;
- (CDStruct_1b6d18a9)scaledDuration;
- (CDStruct_e83c9415)scaledPlaybackRangeForScaledDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)naturalTimeFromScaledTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)naturalTimeForPosterFrame;
- (id)archivalRepresentation;
- (id)initWithOperations:(id)arg1 naturalDuration:(CDStruct_1b6d18a9)arg2;
- (unsigned long long)sortOrderForOperationWithIdentifier:(id)arg1;
- (id)descriptionWithOperations:(id)arg1;
- (id)descriptionByAddingOperation:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)descriptionByAddingOperation:(id)arg1;
- (id)descriptionByReplacingOperation:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)operationWithIdentifier:(id)arg1;
- (id)posterFrameOperation;
- (id)trimOperation;
- (id)slomoOperation;

@end
