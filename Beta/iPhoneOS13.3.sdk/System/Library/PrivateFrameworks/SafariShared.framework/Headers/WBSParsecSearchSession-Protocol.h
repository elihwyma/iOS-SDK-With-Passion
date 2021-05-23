/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/Swift-Protocol.h>

@class WBSCompletionQuery;

@protocol WBSParsecFeedbackDispatcher, WBSParsecSearchSessionDelegate;

@protocol WBSParsecSearchSession <Swift>

@property (weak, nonatomic) id <WBSParsecSearchSessionDelegate> delegate;
@property (retain, nonatomic) WBSCompletionQuery *currentQuery;
@property (nonatomic, setter=setUIScale:) double uiScale;
@property (nonatomic, readonly) id <WBSParsecFeedbackDispatcher> feedbackDispatcher;

@end
