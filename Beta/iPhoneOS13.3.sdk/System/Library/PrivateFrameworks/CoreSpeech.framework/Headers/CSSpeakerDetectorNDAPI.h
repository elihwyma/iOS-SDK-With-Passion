/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSSpeakerModel;

@protocol CSSpeakerDetectorNDAPIDelegate;

@interface CSSpeakerDetectorNDAPI : NSObject

{
    void *_novDetect;
    const struct _ndresult {
        unsigned int _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned int _field4;
        float _field5;
        _Bool _field6;
        _Bool _field7;
    } *_lastResult;
    float _threshold;
    unsigned long long _maxSpeakerVectorsToPersist;
    CSSpeakerModel *_spkModel;
    id <CSSpeakerDetectorNDAPIDelegate> _delegate;
}

@property (weak, nonatomic) id <CSSpeakerDetectorNDAPIDelegate> delegate;

- (void)dealloc;
- (void)reset;
- (unsigned long long)getSATVectorCount;
- (float)getRejectLoggingThreshold;
- (id)initWithAsset:(id)arg1 speakerModel:(id)arg2;
- (unsigned long long)getMaxSpeakerVectorsToPersist;
- (_Bool)addLastTriggerToProfileWithSuperVector:(id)arg1;
- (float)computeSATScore:(id)arg1;
- (float)getSatThreshold;
- (id)analyzeWavForEnrollment:(id)arg1 numSamples:(unsigned long long)arg2;
- (_Bool)addLastTriggerToProfile;
- (_Bool)_initializeNDAPI:(id)arg1 resourcePath:(id)arg2;
- (_Bool)_initializeSAT:(id)arg1;

@end
