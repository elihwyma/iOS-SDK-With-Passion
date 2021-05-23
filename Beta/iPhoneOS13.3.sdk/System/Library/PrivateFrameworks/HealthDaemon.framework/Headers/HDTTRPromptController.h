/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, NSString;

@protocol OS_os_log;

@interface HDTTRPromptController : NSObject

{
    HDProfile *_profile;
    NSObject<OS_os_log> *_loggingCategory;
    _Atomic _Bool _isPresenting;
    _Bool _canRepromptOnSameBuild;
    NSString *_name;
    double _minimumPromptInterval;
    long long _maximumErrorCount;
    NSString *_notificationTitle;
    NSString *_notificationMessage;
    NSString *_radarTitle;
    NSString *_radarDescription;
    CDUnknownBlockType _unitTest_willPresentTTRAlertHandler;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic) double minimumPromptInterval;
@property (nonatomic) long long maximumErrorCount;
@property (nonatomic) _Bool canRepromptOnSameBuild;
@property (copy, nonatomic) NSString *notificationTitle;
@property (copy, nonatomic) NSString *notificationMessage;
@property (copy, nonatomic) NSString *radarTitle;
@property (copy, nonatomic) NSString *radarDescription;
@property (copy, nonatomic) CDUnknownBlockType unitTest_willPresentTTRAlertHandler;

+ (id)nameForDomainName:(id)arg1;
+ (id)_persistedValueKeys;
+ (id)formattedPersistedValuesForDomainName:(id)arg1 database:(id)arg2 error:(id *)arg3;

- (id)init;
- (id)description;
- (id)_keyValueDomain;
- (id)_errorUserInfoKeyErrorDate;
- (id)_errorUserInfoKeyReason;
- (void)_presentTTRPromptForErrors:(id)arg1 lastPromptBuild:(id)arg2 lastPromptDate:(id)arg3 currentBuild:(id)arg4;
- (id)initWithProfile:(id)arg1 domainName:(id)arg2 loggingCategory:(id)arg3;
- (void)promptIfRequiredForReason:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (_Bool)unitTest_setLastPromptDate:(id)arg1 error:(id *)arg2;
- (_Bool)unitTest_setLastPromptBuild:(id)arg1 error:(id *)arg2;

@end
