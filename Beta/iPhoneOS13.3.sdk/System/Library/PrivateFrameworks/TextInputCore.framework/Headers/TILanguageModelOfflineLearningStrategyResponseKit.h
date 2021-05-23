/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, NSURL, RKMessageResponseManager, TILanguageModelOfflineLearningTask;

@interface TILanguageModelOfflineLearningStrategyResponseKit : NSObject

{
    NSMutableDictionary *_recipientModels;
    NSURL *_directory;
    RKMessageResponseManager *_trainer;
    TILanguageModelOfflineLearningTask *_learningTask;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) TILanguageModelOfflineLearningTask *learningTask;

- (id)initWithClientIdentifier:(id)arg1 andDirectory:(id)arg2;
- (_Bool)learnMessages:(id)arg1 withRecipientRecords:(id)arg2;
- (id)filterMessages:(id)arg1;
- (void)didFinishLearning;
- (id)messagesClusteredByRecipient:(id)arg1;

@end
