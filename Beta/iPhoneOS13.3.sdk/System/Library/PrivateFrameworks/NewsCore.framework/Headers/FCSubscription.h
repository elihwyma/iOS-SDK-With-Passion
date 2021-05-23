/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString, NSURL;

@interface FCSubscription : NSObject

{
    _Bool _notificationsEnabled;
    _Bool _canRetry;
    NSString *_subscriptionID;
    unsigned long long _subscriptionType;
    NSNumber *_order;
    NSDate *_dateAdded;
    unsigned long long _zone;
    unsigned long long _subscriptionOrigin;
    NSString *_tagID;
    NSString *_groupID;
    NSURL *_url;
    NSString *_title;
    NSURL *_pollingURL;
    NSString *_errorMessage;
}

@property (copy, nonatomic, readonly) NSString *subscriptionID;
@property (nonatomic, readonly) unsigned long long subscriptionType;
@property (copy, nonatomic, readonly) NSNumber *order;
@property (copy, nonatomic, readonly) NSDate *dateAdded;
@property (nonatomic, readonly) _Bool notificationsEnabled;
@property (nonatomic, readonly) unsigned long long zone;
@property (nonatomic, readonly) unsigned long long subscriptionOrigin;
@property (nonatomic, readonly) NSString *tagID;
@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSURL *pollingURL;
@property (nonatomic, readonly) NSString *errorMessage;
@property (nonatomic, readonly) _Bool canRetry;

+ (id)subscriptionWithSubscriptionID:(id)arg1 tagID:(id)arg2 type:(unsigned long long)arg3 order:(id)arg4 origin:(unsigned long long)arg5 groupID:(id)arg6 dateAdded:(id)arg7 notificationsEnabled:(_Bool)arg8 zone:(unsigned long long)arg9;
+ (id)pendingSubscriptionWithSubscriptionID:(id)arg1 url:(id)arg2 title:(id)arg3 pollingURL:(id)arg4 dateAdded:(id)arg5;
+ (id)subscriptionWithSubscriptionID:(id)arg1 dictionaryRepresentation:(id)arg2;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)priority;
- (long long)comparePriority:(id)arg1;
- (id)asCKRecord;
- (_Bool)isDeprecated;
- (id)initWithSubscriptionID:(id)arg1 tagID:(id)arg2 groupID:(id)arg3 dateAdded:(id)arg4 subscriptionType:(unsigned long long)arg5 order:(id)arg6 origin:(unsigned long long)arg7 notificationsEnabled:(_Bool)arg8 zone:(unsigned long long)arg9;
- (id)initWithSubscriptionID:(id)arg1 url:(id)arg2 title:(id)arg3 pollingURL:(id)arg4 dateAdded:(id)arg5;
- (_Bool)isTypePending;
- (id)copyWithOrder:(id)arg1;
- (_Bool)isTypeTag;
- (_Bool)isTypeMutedTag;
- (_Bool)isTypeAutoFavoriteTag;
- (_Bool)isTypeGroupableTag;
- (_Bool)isTypeIgnoredTag;
- (id)asReorderableTagSubscription;

@end
