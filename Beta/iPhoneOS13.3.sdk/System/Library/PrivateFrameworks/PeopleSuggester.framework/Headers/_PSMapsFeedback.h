/*
 Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

#import <NSObject.h>

@class NSArray, _PSMapsFeedbackAction, _PSMapsPredictionContext;

@interface _PSMapsFeedback : NSObject

{
    _Bool _dryRun;
    _PSMapsFeedbackAction *_action;
    _PSMapsPredictionContext *_context;
    NSArray *_suggestions;
}

@property (nonatomic) _Bool dryRun;
@property (nonatomic, readonly) _PSMapsFeedbackAction *action;
@property (nonatomic, readonly) _PSMapsPredictionContext *context;
@property (nonatomic, readonly) NSArray *suggestions;
@property (nonatomic, readonly) unsigned long long indexOfEngagedSuggestion;

- (id)knowledgeEvent;
- (id)feedbackPayload;
- (id)getTrialID;
- (id)initWithFeedbackAction:(id)arg1 predictionContext:(id)arg2 suggestions:(id)arg3;

@end
