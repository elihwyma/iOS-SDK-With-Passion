/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSString;

@interface PXFeedbackEntry : NSObject

{
    NSDictionary *_feedbackItemDetails;
    _Bool _alreadyCollected;
    NSMutableDictionary *_feedbackItemsDict;
    long long _generalFeedback;
    NSString *_systemID;
    NSDate *_timestamp;
    NSString *_appVersion;
}

@property (retain, nonatomic) NSMutableDictionary *feedbackItemsDict;
@property (nonatomic) long long generalFeedback;
@property (copy, nonatomic) NSString *systemID;
@property (retain, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) _Bool alreadyCollected;

+ (_Bool)supportsSecureCoding;
+ (id)positiveFeedbackForMemoryDetailsKeys;
+ (id)negativeFeedbackForMemoryDetailsKeys;
+ (id)positiveFeedbackForMemoriesKeys;
+ (id)negativeFeedbackForMemoriesKeys;
+ (id)positiveFeedbackForAutoLoopKeys;
+ (id)negativeFeedbackForAutoLoopKeys;
+ (id)positiveFeedbackForImageQualityKeys;
+ (id)negativeFeedbackForImageQualityKeys;
+ (id)createFakeTestEntry;
+ (id)createFakeTestFeedbackDictionary;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)uniqueID;
- (id)longDescription;
- (id)initWithSystemID:(id)arg1 timestamp:(id)arg2;
- (_Bool)userLikedResults;
- (id)osKeyForItemKey:(id)arg1;
- (id)asTextForItemKey:(id)arg1;

@end
