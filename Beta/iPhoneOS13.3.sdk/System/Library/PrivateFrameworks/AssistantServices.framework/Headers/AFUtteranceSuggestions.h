/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol AFUtteranceSuggestionsDelegate, OS_dispatch_queue;

@interface AFUtteranceSuggestions : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_suggestedUtterances;
    NSString *_languageCode;
    id <AFUtteranceSuggestionsDelegate> _delegate;
}

@property (copy, nonatomic, readonly) NSString *languageCode;
@property (weak, nonatomic, readonly) id <AFUtteranceSuggestionsDelegate> delegate;

- (id)_suggestionsFilePath;
- (id)initWithLanguageCode:(id)arg1 delegate:(id)arg2;
- (void)getSuggestedUtterancesWithCompletion:(CDUnknownBlockType)arg1;
- (void)setSuggestedUtterances:(id)arg1;

@end
