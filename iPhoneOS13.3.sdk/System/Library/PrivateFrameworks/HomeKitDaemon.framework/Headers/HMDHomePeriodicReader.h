//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDBackgroundTaskAgentTimer, HMDHome, NSObject;
@protocol OS_dispatch_queue;

@interface HMDHomePeriodicReader : HMFObject <HMFLogging>
{
    HMDHome *_home;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDBackgroundTaskAgentTimer *_btaReadTimer;
}

+ (id)logCategory;
@property(readonly, nonatomic) HMDBackgroundTaskAgentTimer *btaReadTimer; // @synthesize btaReadTimer=_btaReadTimer;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak HMDHome *home; // @synthesize home=_home;
// - (void).cxx_destruct;
- (void)_startTimer;
- (void)_issueCharacteristicRequests:(id)arg1;
- (void)_checkToIssueRead;
- (void)checkToIssueRead;
- (void)startReadTimer;
- (id)_characteristicsToRead;
- (void)residentUpdated;
- (void)timerFired:(id)arg1;
- (void)handleCharacteristicBasedEventAdded:(id)arg1;
- (id)logIdentifier;
- (void)dealloc;
- (void)configure:(id)arg1;

@end

