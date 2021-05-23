/*
 Image: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
 */

#import <Foundation/NSObject.h>

@class ICInAppMessageMetadataEntry, NSArray, NSDictionary;

@protocol IAMApplicationContextProvider;

@interface IAMEvaluator : NSObject

{
    ICInAppMessageMetadataEntry *_currentMetadata;
    ICInAppMessageMetadataEntry *_currentProximityMetadata;
    NSArray *_messageEntries;
    NSDictionary *_metadataEntries;
    id <IAMApplicationContextProvider> _applicationContext;
    NSArray *_passingMessageEntries;
    NSArray *_messagesCloseToPassing;
}

@property (retain) NSArray *passingMessageEntries;
@property (retain) NSArray *messagesCloseToPassing;

+ (_Bool)applicationContext:(id)arg1 allowsPresentationForPolicyGroup:(long long)arg2;
+ (long long)_compareCurrentTimeWithMessageTime:(double)arg1;
+ (_Bool)_isMessageWithinDateRange:(id)arg1;

- (id)initWithMessageEntries:(id)arg1 metadataEntries:(id)arg2 applicationContext:(id)arg3;
- (id)computeMessagesCloseToPassingWithProximityThreshold:(unsigned long long)arg1;
- (id)computePassingMessageEntries;
- (_Bool)_evaluateRule:(id)arg1;
- (unsigned long long)_messageEntryProximity:(id)arg1;
- (_Bool)_evaluateCondition:(id)arg1;
- (_Bool)_evaluateCompoundRule:(id)arg1;
- (unsigned long long)_calculateRuleProximity:(id)arg1;
- (unsigned long long)_calculateConditionProximity:(id)arg1;
- (unsigned long long)_calculateCompoundRuleProximity:(id)arg1;

@end
