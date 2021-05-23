/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/Swift-Protocol.h>

@class TITypingSession, TITypingSessionAligned;

@protocol TIUserModeling;

@protocol TITypingSessionAnalyzing <Swift>

@property (retain, nonatomic) id <TIUserModeling> userModel;
@property (retain, nonatomic) TITypingSession *lastSessionAnalyzed;
@property (retain, nonatomic) TITypingSessionAligned *lastAlignmentAnalyzed;

- (unsigned short)analyze:alignedSession: /* Error: Ran out of types for this method. */;

@end
