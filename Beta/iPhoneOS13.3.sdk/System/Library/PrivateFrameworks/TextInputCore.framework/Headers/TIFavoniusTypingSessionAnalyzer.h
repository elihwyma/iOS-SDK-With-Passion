/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSString, TITypingSession, TITypingSessionAligned;

@protocol TIUserModeling;

@interface TIFavoniusTypingSessionAnalyzer : NSObject

{
    TITypingSession *_lastSessionAnalyzed;
    TITypingSessionAligned *_lastAlignmentAnalyzed;
    id <TIUserModeling> _userModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id <TIUserModeling> userModel;
@property (retain, nonatomic) TITypingSession *lastSessionAnalyzed;
@property (retain, nonatomic) TITypingSessionAligned *lastAlignmentAnalyzed;

- (_Bool)analyze:(id)arg1 alignedSession:(id)arg2;
- (id)initWithUserModel:(id)arg1;
- (unsigned long long)canAnalyze:(id)arg1 alignedSession:(id)arg2;
- (void)addToTransientCounter:(int)arg1 forKey:(id)arg2 andContext:(id)arg3 andCandidateString:(id)arg4;
- (void)incrementTransientCounterForKey:(id)arg1 andContext:(id)arg2 andCandidateString:(id)arg3;
- (_Bool)isPathable:(id)arg1 context:(id)arg2;
- (void)updateDurationCounterForWord:(id)arg1 forTypingContext:(id)arg2;
- (void)logPathedCandidate:(id)arg1 forKey:(id)arg2 withConfidence:(unsigned long long)arg3 isCompletion:(_Bool)arg4;
- (_Bool)handleWordEntry:(id)arg1 withConfidence:(unsigned long long)arg2;
- (id)deleteLengthMetrics:(id)arg1 nextWordEntryCandText:(id)arg2;
- (_Bool)handleDeleteWord:(id)arg1 nextAction:(id)arg2 withConfidence:(unsigned long long)arg3;
- (_Bool)handlePath:(id)arg1;

@end
