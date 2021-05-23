/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@class IMDChatRegistry, INVocabulary;

@interface IMDChatVocabularyUpdater : NSObject

{
    _Bool _haveDeferredUpdateRequest;
    IMDChatRegistry *_chatRegistry;
    INVocabulary *_vocabulary;
}

@property (retain, nonatomic) IMDChatRegistry *chatRegistry;
@property (retain, nonatomic) INVocabulary *vocabulary;
@property (nonatomic) _Bool haveDeferredUpdateRequest;

+ (id)sharedInstance;
+ (void)performInitialUpdateIfNeeded;

- (void)dealloc;
- (id)initWithChatRegistry:(id)arg1 vocabulary:(id)arg2;
- (void)_updateVocabularyExcludingChat:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateVocabularyForAddedChat:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateVocabularyForDeletedChat:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateVocabularyForRenamedChat:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateVocabularyForDeferredUpdateRequestIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
