/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/WDSampleListDataProvider.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WDAudiogramListDataProvider : WDSampleListDataProvider

@property (nonatomic, readonly) NSArray *audiogramSamples;

- (id)sampleTypes;
- (id)textForObject:(id)arg1;

@end
