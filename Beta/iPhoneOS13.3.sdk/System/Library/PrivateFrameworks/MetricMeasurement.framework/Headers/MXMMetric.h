/*
 Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

#import <Foundation/NSObject.h>

@class MXMInstrument, MXMMutableSampleData, MXMProbe, MXMSampleFilter, NSString;

@interface MXMMetric : NSObject

{
    MXMProbe *_probe;
    NSString *_identifier;
    NSString *_version;
    NSString *_build;
    MXMMutableSampleData *_data;
    MXMSampleFilter *_filter;
    unsigned long long _preferredSampleMode;
}

@property (nonatomic, readonly) unsigned long long _sampleMode;
@property (nonatomic, readonly) _Bool _shouldConstructProbe;
@property (nonatomic, readonly) _Bool _shouldAlwaysWrapInProxy;
@property (nonatomic, readonly) _Bool _shouldNeverWrapInProxy;
@property (nonatomic, readonly) MXMInstrument *instrument;
@property (nonatomic, readonly) NSString *identifier;
@property (retain, nonatomic) MXMSampleFilter *filter;
@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) NSString *build;
@property (nonatomic) unsigned long long preferredSampleMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 filter:(id)arg2;
- (id)_getProbe;
- (void)willStartAtEstimatedTime:(unsigned long long)arg1;
- (id)_constructProbe;
- (_Bool)prepareWithOptions:(id)arg1 error:(id *)arg2;
- (void)didStartAtTime:(unsigned long long)arg1 startDate:(id)arg2;
- (void)willStop;
- (void)didStopAtTime:(unsigned long long)arg1 stopDate:(id)arg2;
- (_Bool)harvestData:(id *)arg1 error:(id *)arg2;
- (void)probeDidUpdate:(id)arg1 data:(id)arg2 stop:(_Bool *)arg3;
- (_Bool)_shouldWrapInProxy;

@end
