/*
 Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
 */

#import <Foundation/NSObject.h>

@protocol OS_os_log, _CDLocalContext;

@interface _DASSystemContext : NSObject

{
    id <_CDLocalContext> _context;
    NSObject<OS_os_log> *_dasSystemContextLog;
    long long _networkPathStatus;
    long long _inexpensiveNetworkPathStatus;
}

@property (retain, nonatomic) id <_CDLocalContext> context;
@property (retain, nonatomic) NSObject<OS_os_log> *dasSystemContextLog;
@property (nonatomic) long long networkPathStatus;
@property (nonatomic) long long inexpensiveNetworkPathStatus;

+ (id)sharedInstance;
+ (id)initWithContext:(id)arg1;

- (id)init;
- (_Bool)allowsDiscretionaryWorkForTask:(id)arg1 withPriority:(unsigned long long)arg2 withParameters:(id)arg3;
- (_Bool)allowDiscretionaryWorkForBackgroundTask:(id)arg1 withParameters:(id)arg2;
- (_Bool)allowDiscretionaryWorkForUtilityTask:(id)arg1 withParameters:(id)arg2;
- (_Bool)isNetworkAvailable;
- (_Bool)isApplicationFocalForPushTask:(id)arg1;
- (_Bool)isInexpensiveNetworkAvailable;

@end
