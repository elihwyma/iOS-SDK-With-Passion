/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSAggregator, CSAsset, CSUserVoiceProfile, NSData, NSString;

@protocol OS_dispatch_group;

@interface CSVoiceProfilePruner : NSObject

{
    float _retrainTDSRScore;
    unsigned long long _currUttLengthInMs;
    NSObject<OS_dispatch_group> *_spIdDispatchGroup;
    unsigned long long _spIdType;
    NSData *_speakerVector;
    unsigned long long _speakerVectorSize;
    CSUserVoiceProfile *_profile;
    NSString *_locale;
    CSAsset *_asset;
    CSAggregator *_aggregator;
}

@property (nonatomic) unsigned long long currUttLengthInMs;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *spIdDispatchGroup;
@property (nonatomic) unsigned long long spIdType;
@property (nonatomic) float retrainTDSRScore;
@property (retain, nonatomic) NSData *speakerVector;
@property (nonatomic) unsigned long long speakerVectorSize;
@property (retain, nonatomic) CSUserVoiceProfile *profile;
@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) CSAsset *asset;
@property (retain, nonatomic) CSAggregator *aggregator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)textDependentSpeakerRecognizer:(id)arg1 failedWithError:(id)arg2;
- (void)textDependentSpeakerRecognizer:(id)arg1 hasSatScore:(float)arg2;
- (unsigned long long)_deleteUtterances:(id)arg1;
- (_Bool)pruneVoiceProfileIfNecessary;
- (id)initWithVoiceProfile:(id)arg1 spIdType:(unsigned long long)arg2 languageCode:(id)arg3 asset:(id)arg4;
- (id)_getLastPruningCookieForLanguageCode:(id)arg1;
- (_Bool)_updatePruningCookieWith:(id)arg1 forLanguageCode:(id)arg2;
- (id)analyzeEnrollmentUtts:(id)arg1 tdsrAnalyzer:(id)arg2 satAnalyzer:(id)arg3 thresholdTrigger:(double)arg4 thresholdSAT:(double)arg5 thresholdTDSR:(double)arg6 isUpdatingModel:(_Bool)arg7 extraUtts:(id *)arg8 discardUtts:(id *)arg9 psrTimeout:(_Bool *)arg10;
- (double)_computeSamplingMSEForUtts:(id)arg1 satAnalyzer:(id)arg2 utterences:(id)arg3 withBeforeScores:(id)arg4;

@end
