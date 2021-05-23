/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSArray, REMFetchMetadata, REMFetchResultToken;

@interface REMFetchResult : NSObject <Swift>

{
    long long _type;
    long long _count;
    NSArray *_requestedObjectIDs;
    NSArray *_fetchedAccountStorages;
    NSArray *_fetchedListStorages;
    NSArray *_fetchedReminderStorages;
    REMFetchMetadata *_metadata;
    REMFetchResultToken *_fetchResultToken;
}

@property (nonatomic) long long type;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) NSArray *requestedObjectIDs;
@property (nonatomic, readonly) NSArray *fetchedAccountStorages;
@property (nonatomic, readonly) NSArray *fetchedListStorages;
@property (nonatomic, readonly) NSArray *fetchedReminderStorages;
@property (nonatomic, readonly) REMFetchMetadata *metadata;
@property (retain, nonatomic) REMFetchResultToken *fetchResultToken;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCount:(long long)arg1;
- (id)initWithType:(long long)arg1;
- (id)initWithMetadata:(id)arg1;
- (id)initWithAccountStorages:(id)arg1 listStorages:(id)arg2 reminderStorages:(id)arg3 requestedObjectIDs:(id)arg4 metadata:(id)arg5;
- (id)initWithAccountStorages:(id)arg1;
- (id)initWithListStorages:(id)arg1;
- (id)initWithReminderStorages:(id)arg1;
- (id)initWithRequestedObjectIDs:(id)arg1;

@end
