/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class HDDatabaseTransactionContext, HDKeyValueDomain, HDProfile, NSCalendar;

@interface ACHSyncingMonthlyChallengeTemplateCache : NSObject

{
    struct os_unfair_lock_s _lock;
    HDDatabaseTransactionContext *_databaseContext;
    HDProfile *_profile;
    NSCalendar *_gregorianCalendar;
    HDKeyValueDomain *_keyValueDomain;
}

@property (retain, nonatomic) HDProfile *profile;
@property (retain, nonatomic) NSCalendar *gregorianCalendar;
@property (retain, nonatomic) HDKeyValueDomain *keyValueDomain;
@property (nonatomic) struct os_unfair_lock_s lock;
@property (copy, nonatomic) HDDatabaseTransactionContext *databaseContext;

- (id)initWithProfile:(id)arg1;
- (_Bool)cacheTemplate:(id)arg1 error:(id *)arg2;
- (id)allCachedTemplatesWithError:(id *)arg1;
- (id)templateForDateComponents:(id)arg1 error:(id *)arg2;

@end
