/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

#import <Email/Swift-Protocol.h>

@class EMActivityObjectID, EMStatusUpdateProvider, NSDate, NSDictionary, NSError, NSProgress, NSString;

@protocol EFCancelable;

@interface EMActivity : NSObject <Swift>

{
    struct os_unfair_lock_s _lock;
    EMStatusUpdateProvider *_statusUpdateProvider;
    id <EFCancelable> _progressKVOCancellation;
    NSDictionary *_userInfo;
    long long _activityType;
    NSDate *_started;
    NSDate *_finished;
    NSProgress *_progress;
    NSError *_error;
    double _fractionCompleted;
    EMActivityObjectID *_objectID;
}

@property (copy, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) double fractionCompleted;
@property (readonly) EMActivityObjectID *objectID;
@property (readonly) _Bool needsPersistentHistory;
@property (readonly) long long activityType;
@property (readonly) NSDate *started;
@property (readonly) NSDate *finished;
@property (copy, readonly) NSString *localizedDescription;
@property (readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)keyPathsForValuesAffectingLocalizedDescription;
+ (id)log;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (void)finishWithError:(id)arg1;
- (void)_observeProgress;
- (id)_localizedDescriptionForFetchState:(long long)arg1;
- (id)initWithActivityType:(long long)arg1 userInfo:(id)arg2;
- (_Bool)isEqualToActivityWithType:(long long)arg1 userInfo:(id)arg2;
- (void)setCompletedCount:(long long)arg1 totalCount:(long long)arg2;

@end
