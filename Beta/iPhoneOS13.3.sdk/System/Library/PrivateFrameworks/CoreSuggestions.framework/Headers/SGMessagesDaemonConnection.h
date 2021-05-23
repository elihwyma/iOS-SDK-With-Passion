/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol SGDSuggestManagerMessagesProtocol;

@interface SGMessagesDaemonConnection : NSObject

{
    NSMutableDictionary *_contextSent;
    id <SGDSuggestManagerMessagesProtocol> _remoteSuggestionManager;
}

- (void)dealloc;
- (void)connectionInterrupted;
- (id)initWithDaemonConnection:(id)arg1;
- (void)setManagerForTesting:(id)arg1;
- (_Bool)hasContextBeenSentForConversation:(id)arg1;
- (void)didSendContextForConversation:(id)arg1;
- (id)remoteSuggestionManager;

@end
