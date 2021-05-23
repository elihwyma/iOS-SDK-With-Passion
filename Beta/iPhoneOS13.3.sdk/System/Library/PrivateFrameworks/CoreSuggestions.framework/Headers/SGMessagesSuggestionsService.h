/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <CoreSuggestions/SGSuggestionsService.h>

@class NSMutableDictionary, SGMessagesDaemonConnection;

@protocol SGMessagesSuggestionsServiceDelegate;

@interface SGMessagesSuggestionsService : SGSuggestionsService

{
    id <SGMessagesSuggestionsServiceDelegate> _delegate;
    SGMessagesDaemonConnection *_messagesDaemonConnection;
    NSMutableDictionary *_previousMessages;
}

@property (retain) SGMessagesDaemonConnection *messagesDaemonConnection;
@property (retain) NSMutableDictionary *previousMessages;
@property (weak) id <SGMessagesSuggestionsServiceDelegate> delegate;

- (id)init;
- (void)harvestedSuggestionsFromMessages:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)harvestedSuggestionsFromMessage:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_remoteSuggestionManager;
- (void)setManagerForTesting:(id)arg1;
- (void)harvestedSuggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setupContextIfNeededForConversation:(id)arg1;
- (void)sendContextForMessage:(id)arg1;
- (_Bool)isMessageEligibleForSuggestions:(id)arg1;

@end
