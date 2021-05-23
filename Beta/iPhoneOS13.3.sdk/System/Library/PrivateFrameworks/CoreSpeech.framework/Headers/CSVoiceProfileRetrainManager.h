/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class CSOSTransaction, NSString;

@protocol OS_dispatch_queue;

@interface CSVoiceProfileRetrainManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    CSOSTransaction *_retrainerTransaction;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSOSTransaction *retrainerTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;
- (void)triggerVoiceProfileRetrainingWithAsset:(id)arg1;
- (void)analyzeImplicitUtterance:(id)arg1 withVoiceTriggerContext:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)CSVoiceTriggerEnabledMonitor:(id)arg1 didReceiveEnabled:(_Bool)arg2;
- (void)_runVoiceProfileRetrainerWithAsset:(id)arg1 withLanguageCode:(id)arg2;
- (_Bool)_checkIfUtteranceTriggerScoreExceedsThreshold:(float)arg1 withVTEI:(id)arg2;
- (id)_addUtterances:(id)arg1 withTrainer:(id)arg2;
- (void)_retrainTDSRAndSATModelWithAsset:(id)arg1 withLanguageCode:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_retrainModel:(unsigned long long)arg1 withAsset:(id)arg2 forLanguageCode:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;

@end
