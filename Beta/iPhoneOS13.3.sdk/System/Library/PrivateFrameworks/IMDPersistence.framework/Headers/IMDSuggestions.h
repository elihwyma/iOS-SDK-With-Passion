/*
 Image: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
 */

#import <Foundation/NSObject.h>

@protocol NSObject><SGSuggestionsServiceMessagesProtocol;

@interface IMDSuggestions : NSObject

{
    id <NSObject><SGSuggestionsServiceMessagesProtocol> _sgService;
}

@property (retain) id <NSObject><SGSuggestionsServiceMessagesProtocol> sgService;

- (id)init;
- (void)dealloc;
- (void)suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)suggestionsService:(id)arg1 needsContextForConversationIdentifier:(id)arg2 numberOfMessagesNeeded:(unsigned long long)arg3;

@end
