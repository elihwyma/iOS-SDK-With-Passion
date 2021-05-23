/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/NUAutoCalculator.h>

@class NSString;

@interface PISmartBlackAndWhiteAutoCalculator : NUAutoCalculator

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) CDStruct_1b6d18a9 time;

- (void)submit:(CDUnknownBlockType)arg1;
- (id)_calculateBlackAndWhiteSettingsFromBufferImage:(id)arg1;

@end
