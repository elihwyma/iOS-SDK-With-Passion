/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSDate, NSError, NSNumber, NSString;

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKDPCSKeySyncTracker : NSObject

{
    _Bool _manatee;
    NSString *_serviceName;
    NSObject<OS_dispatch_group> *_syncGroup;
    NSDate *_completionDate;
    NSNumber *_syncStatus;
    NSError *_syncError;
}

@property (nonatomic, readonly) unsigned long long state;
@property (retain, nonatomic) NSString *serviceName;
@property (nonatomic, getter=isManatee) _Bool manatee;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *syncGroup;
@property (retain, nonatomic) NSDate *completionDate;
@property (retain, nonatomic) NSNumber *syncStatus;
@property (retain, nonatomic) NSError *syncError;

- (void)waitOnSyncWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
