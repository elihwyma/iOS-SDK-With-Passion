/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/Swift-Protocol.h>

@class TILanguageModelOfflineLearningTask;

@protocol TILanguageModelOfflineLearningStrategy <Swift>

@property (readonly) TILanguageModelOfflineLearningTask *learningTask;

- (unsigned short)learnMessages:withRecipientRecords: /* Error: Ran out of types for this method. */;
- (unsigned short)filterMessages: /* Error: Ran out of types for this method. */;
- (unsigned short)didFinishLearning;

@end
