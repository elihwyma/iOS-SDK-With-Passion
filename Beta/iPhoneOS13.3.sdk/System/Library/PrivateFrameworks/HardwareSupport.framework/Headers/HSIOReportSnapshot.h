/*
 Image: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
 */

#import <HardwareSupport/HSIOReport.h>

@class NSArray;

@interface HSIOReportSnapshot : HSIOReport

{
    NSArray *_samples;
}

@property (retain, nonatomic) NSArray *samples;

+ (id)report:(id *)arg1;
+ (id)reportWithOnlySimpleChannels:(id *)arg1;
+ (id)snapshotReport:(id)arg1 error:(id *)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToSnapshot:(id)arg1;
- (id)reportWithOnlySimpleChannels;
- (id)snapshotWithBaseline:(id)arg1 error:(id *)arg2;
- (id)snapshotByFilteringSamples:(CDUnknownBlockType)arg1;

@end
