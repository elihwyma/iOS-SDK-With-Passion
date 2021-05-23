/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXNotificationContext, NSDate, NSMutableArray, NSNumber, NSString;

@protocol OS_dispatch_queue;

@interface ATXNotificationsRecord : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _finished;
    long long _outcome;
    long long _endingInteraction;
    NSString *_appName;
    NSDate *_publicationDate;
    NSString *_categoryID;
    NSString *_title;
    NSString *_subtitle;
    NSString *_message;
    NSNumber *_numSuppActions;
    NSNumber *_timezone;
    unsigned long long _incomingFeed;
    _Bool _hidden;
    NSDate *_activatedTime;
    NSDate *_unlockedTime;
    NSString *_notificationId;
    ATXNotificationContext *_ctx;
    NSDate *_creationTime;
    NSMutableArray *_stream;
}

@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *notificationId;
@property (retain, nonatomic) ATXNotificationContext *ctx;
@property (retain, nonatomic) NSDate *creationTime;
@property (retain, nonatomic) NSMutableArray *stream;

+ (id)serializeMetadata:(id)arg1 error:(id)arg2;
+ (_Bool)isNotificationMetadataFromLockscreen:(id)arg1;

- (id)init;
- (void)start;
- (id)message;
- (_Bool)isExpired;
- (_Bool)addEvent:(id)arg1;
- (_Bool)isIgnored;
- (id)initWithSerializedMetadata:(id)arg1 notificationID:(id)arg2 timestamp:(id)arg3;
- (id)initWithATXNotificationsInterface:(id)arg1 notificationID:(id)arg2 timestamp:(id)arg3 motion:(id)arg4;
- (long long)determineEndingInteraction;
- (long long)determineOutcome;
- (_Bool)isCleared;
- (_Bool)isEngagement;
- (long long)getOutcome;
- (long long)getEndingInteraction;
- (_Bool)isOnLockscreen;
- (_Bool)hasOrbed;
- (_Bool)hasGivenEventType:(long long)arg1;
- (_Bool)hasTappedCoalesceAndIsTopOfPile;
- (_Bool)hasDeviceStateChanged:(long long)arg1;
- (long long)findNextEventInStreamAndRecordTime:(id)arg1 forType:(long long)arg2;
- (id)getSerializedMetadata;
- (id)json:(_Bool)arg1;
- (id)pbmsg;
- (id)messageWithGrade:(id)arg1 userid:(id)arg2;
- (id)pbmsgWithGrade:(id)arg1 userId:(id)arg2;

@end
