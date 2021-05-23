/*
 Image: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface HAECGExporter : NSObject

{
    struct unique_ptr<CinnAlgs::CnAlgs, std::__1::default_delete<CinnAlgs::CnAlgs>> _cinAlgs;
    NSMutableArray *_currentLiveWaveform;
    _Bool _fromRightWrist;
}

@property (nonatomic, readonly) _Bool fromRightWrist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id).cxx_construct;
- (void)resetFilter;
- (void)sr_beginMultiSampleStream;
- (id)sr_endMultiSampleStream;
- (id)sr_dictionaryRepresentationWithSample:(id)arg1;
- (id)dumpCurrentWaveform;
- (void)handleRealtimeSamples:(const float *)arg1 count:(unsigned int)arg2 startTimestamp:(unsigned long long)arg3;

@end
