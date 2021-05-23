/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSString, TITypologyLog, TITypologyStatistic;

@interface TIKeyboardInputManagerLogger : NSObject

{
    NSString *_inputModeIdentifier;
    TITypologyLog *_typologyLog;
    TITypologyStatistic *_typologyStatistic;
}

@property (retain, nonatomic) NSString *inputModeIdentifier;
@property (retain, nonatomic) TITypologyLog *typologyLog;
@property (retain, nonatomic) TITypologyStatistic *typologyStatistic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)pruneTypologyLogsToMaxNumBytes:(long long)arg1 satisfyingPredicate:(CDUnknownBlockType)arg2;
+ (void)submitStructuredDataReportForTypologyLog:(id)arg1;
+ (void)writeHumanReadableTraceForTypologyLog:(id)arg1;
+ (id)writeToFileWithTypologyLog:(id)arg1;
+ (void)submitAggregrateDictionaryReport:(id)arg1 inputModeIdentifier:(id)arg2;
+ (id)accessibilityConfigInfo;
+ (id)writePropertyList:(id)arg1 withFilename:(id)arg2;
+ (id)generateStructuredDataReportForTypologyLog:(id)arg1;
+ (_Bool)shouldSubmitStructuredDataReportForTypologyLog:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)setConfig:(id)arg1;
- (void)logToHumanReadableTrace:(id)arg1;
- (id)writeToFile;
- (void)logKeyboardConfig:(id)arg1 forSyncToKeyboardState:(id)arg2;
- (void)logKeyboardOutput:(id)arg1 keyboardConfiguration:(id)arg2 forKeyboardInput:(id)arg3 keyboardState:(id)arg4;
- (void)logAutocorrections:(id)arg1 forKeyboardState:(id)arg2 requestToken:(id)arg3;
- (void)logCandidateResultSet:(id)arg1 forKeyboardState:(id)arg2;
- (void)logKeyboardConfig:(id)arg1 textToCommit:(id)arg2 forAcceptedCandidate:(id)arg3 keyboardState:(id)arg4;
- (void)logReplacements:(id)arg1 forString:(id)arg2 keyLayout:(id)arg3;
- (void)logRefinements:(id)arg1 forCandidate:(id)arg2 keyboardState:(id)arg3;
- (void)logHitKeyCode:(long long)arg1 forTouchEvent:(id)arg2 keyboardState:(id)arg3;
- (void)logReceivedSkipHitTestForTouchEvent:(id)arg1 forKeyboardState:(id)arg2;
- (void)logKeyboardConfig:(id)arg1 forAdjustedPhraseBoundaryInForwardDirection:(_Bool)arg2 granularity:(int)arg3 keyboardState:(id)arg4;
- (void)logReceivedSetOriginalInput:(id)arg1;
- (void)logReceivedTextAccepted:(id)arg1;
- (void)logReceivedCandidateRejected:(id)arg1;
- (void)logReceivedLastAcceptedCandidateCorrected;
- (_Bool)shouldWriteToSyslogForKeyboardState:(id)arg1;
- (_Bool)shouldWriteToTypologyLogForKeyboardState:(id)arg1;
- (void)disableTypologyLogIfNecessaryForKeyboardState:(id)arg1;
- (void)backgroundWriteLogsAndSubmitReport;
- (void)logKeyboardLayout:(id)arg1 name:(id)arg2;

@end
