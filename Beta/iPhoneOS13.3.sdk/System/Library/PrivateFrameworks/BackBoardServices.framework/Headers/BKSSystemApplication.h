/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@class BKSSystemApplicationClient, NSString;

@protocol BKSSystemApplicationDelegate, OS_dispatch_queue;

@interface BKSSystemApplication : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    BKSSystemApplicationClient *_client;
    id <BKSSystemApplicationDelegate> _delegate;
    _Bool _waitForDataMigration;
    double _systemIdleSleepInterval;
}

@property (weak, nonatomic) id <BKSSystemApplicationDelegate> delegate;
@property (nonatomic) _Bool waitForDataMigration;
@property (nonatomic) double systemIdleSleepInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)start;
- (id)initWithQueue:(id)arg1;
- (void)sendActions:(id)arg1;
- (_Bool)clientIsAliveForWatchdog:(id)arg1;
- (void)bootstrap;
- (void)finishBooting;

@end
