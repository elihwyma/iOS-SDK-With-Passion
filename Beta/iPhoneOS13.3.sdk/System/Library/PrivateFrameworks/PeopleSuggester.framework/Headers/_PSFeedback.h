/*
 Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

#import <NSObject.h>

@class NSArray, NSString, _PSFeedbackAction, _PSPredictionContext;

@interface _PSFeedback : NSObject

{
    _Bool _dryRun;
    float _numberOfVisibleSuggestions;
    _PSFeedbackAction *_action;
    double _delay;
    _PSPredictionContext *_context;
    NSArray *_suggestions;
    NSString *_sessionIdentifier;
}

@property (nonatomic) _Bool dryRun;
@property (nonatomic, readonly) _PSFeedbackAction *action;
@property (nonatomic, readonly) unsigned long long indexOfEngagedSuggestion;
@property (nonatomic, readonly) double delay;
@property (nonatomic, readonly) _PSPredictionContext *context;
@property (nonatomic, readonly) NSArray *suggestions;
@property (nonatomic, readonly) float numberOfVisibleSuggestions;
@property (copy, nonatomic, readonly) NSString *sessionIdentifier;

+ (id)feedbackForAction:(id)arg1 delay:(double)arg2 context:(id)arg3 suggestions:(id)arg4 numberOfVisibleSuggestions:(float)arg5 sessionIdentifier:(id)arg6;

- (id)knowledgeEvent;
- (id)feedbackPayload;
- (id)getTrialID;
- (id)initWithAction:(id)arg1 delay:(double)arg2 context:(id)arg3 suggestions:(id)arg4 numberOfVisibleSuggestions:(float)arg5 sessionIdentifier:(id)arg6;

@end
