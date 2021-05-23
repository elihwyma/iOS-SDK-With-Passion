/*
 Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface _PSMessagesZkwFeedback : NSObject

{
    _Bool _dryRun;
    NSString *_chatGuidEngaged;
    NSArray *_suggestions;
}

@property (nonatomic) _Bool dryRun;
@property (copy, nonatomic, readonly) NSString *chatGuidEngaged;
@property (copy, nonatomic, readonly) NSArray *suggestions;

- (id)initWithChatGuidEngagaged:(id)arg1 suggestions:(id)arg2;
- (id)feedbackPayload;
- (id)getTrialID;
- (unsigned long long)indexOfEngagedSuggestionForChatGuidEngaged;
- (id)reasonTypeForSuggestionIndex:(unsigned long long)arg1;
- (id)reasonForSuggestionIndex:(unsigned long long)arg1;
- (long long)feedbackActionTypeForSuggestionIndex:(unsigned long long)arg1;

@end
