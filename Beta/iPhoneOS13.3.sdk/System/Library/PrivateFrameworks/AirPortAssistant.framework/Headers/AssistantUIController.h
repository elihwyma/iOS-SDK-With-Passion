/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <Foundation/NSObject.h>

@class AUSetupController, AutoGuessController, NSArray, NSDictionary, NSMutableDictionary, NSString, StepByStepController;

@interface AssistantUIController : NSObject

{
    id _delegate;
    NSMutableDictionary *_setupOptions;
    int _state;
    int _assistantResult;
    AutoGuessController *_autoGuessController;
    AUSetupController *_setupController;
    StepByStepController *_stepByStepController;
    NSDictionary *_guessCompleteDict;
    int _connectionStatusSelectorAwaitingResolution;
    NSDictionary *_lastAssociatedInfo;
    NSDictionary *_lastAutoguessInstrumentation;
    NSDictionary *_lastSetupInstrumentation;
    NSDictionary *_lastStepByStepInstrumentation;
    NSString *_targetMACAddress;
    NSDictionary *_targetScanRecord;
    NSDictionary *_targetBrowseRecord;
    NSArray *_paramScanResults;
}

@property (readonly) int assistantResult;
@property (retain) NSString *targetMACAddress;
@property (retain) NSDictionary *targetScanRecord;
@property (retain) NSDictionary *targetBrowseRecord;
@property (retain) NSArray *paramScanResults;
@property id delegate;
@property (retain) NSMutableDictionary *setupOptions;
@property (readonly) int state;
@property (retain) AutoGuessController *autoGuessController;
@property (retain) AUSetupController *setupController;
@property (retain) StepByStepController *stepByStepController;
@property (retain) NSDictionary *guessCompleteDict;
@property (readonly) int connectionStatusSelectorAwaitingResolution;
@property (retain) NSDictionary *lastAssociatedInfo;
@property (retain) NSDictionary *lastAutoguessInstrumentation;
@property (retain) NSDictionary *lastSetupInstrumentation;
@property (retain) NSDictionary *lastStepByStepInstrumentation;

- (id)init;
- (void)dealloc;
- (void)autoguessProgressUpdated:(int)arg1 paramString:(id)arg2;
- (void)autoguessUpdateTargetInfo:(id)arg1;
- (void)autoguessProgressComplete:(id)arg1;
- (int)startAutoGuess;
- (int)doneWithAssistant:(_Bool)arg1;
- (int)startStepByStepFromAutoGuessRecommendation;
- (void)presentUIForStepByStepNextStepResult:(int)arg1 withOptions:(id)arg2;
- (void)presentUIForConnectionVerificationResult:(int)arg1 withOptions:(id)arg2;
- (void)showUIConfigPromptResult:(int)arg1 withOptions:(id)arg2;
- (id)modifyTopoUIInLayer:(id)arg1 withLayout:(id)arg2 andOwningView:(id)arg3 targetProductID:(id)arg4 targetDeviceKind:(id)arg5 targetName:(id)arg6 targetWiFiName:(id)arg7 sourceProductID:(id)arg8 sourceDeviceKind:(id)arg9 sourceName:(id)arg10 sourceWiFiName:(id)arg11 connectionType:(id)arg12;
- (int)startSetupFromAutoGuessRecommendation:(id)arg1;
- (int)cancelCurrentAssistantState:(_Bool)arg1;
- (_Bool)restoreNetworkIfNeeded:(_Bool)arg1 disassociateIfNeeded:(_Bool)arg2 forceQuit:(_Bool)arg3;
- (void)deliverSetupUIConfigResult:(int)arg1 withOptions:(id)arg2;
- (void)handlePresentAutoGuessUIFromAutoGuessCompleteResult:(_Bool)arg1;
- (id)setupPromptStringForBaseInfo:(id)arg1 andResult:(int)arg2;
- (void)presentUIForConnectionVerification:(int)arg1 status:(int)arg2 paramDict:(id)arg3;
- (void)presentUIForUIConfigPrompt:(int)arg1 paramDict:(id)arg2;
- (int)startSetupFromStepByStepResults:(id)arg1;
- (void)setupProgressUpdated:(int)arg1 status:(int)arg2 paramDict:(id)arg3 forController:(id)arg4;
- (void)setupCompleteWithResult:(int)arg1 baseStationInfo:(id)arg2 forController:(id)arg3;
- (void)stepByStepProgressUpdated:(int)arg1 status:(int)arg2 paramString:(id)arg3;
- (void)stepByStepCompleteWithResult:(int)arg1 paramDict:(id)arg2;
- (void)stepByStepNextStep:(int)arg1 paramDict:(id)arg2;
- (void)setupUIConfigConnectionStatusUpdated:(int)arg1 status:(int)arg2 paramDict:(id)arg3 forController:(id)arg4;
- (void)setupUIConfigPrompt:(int)arg1 paramDict:(id)arg2 forController:(id)arg3;
- (int)startRestoreFromAutoGuessRecommendation;
- (int)startRestoreNetwork:(id)arg1;
- (void)restoreNetworkDone:(id)arg1;

@end
