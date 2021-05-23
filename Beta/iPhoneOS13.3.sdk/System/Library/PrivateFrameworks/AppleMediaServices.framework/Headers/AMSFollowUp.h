/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class FLFollowUpController;

@protocol OS_dispatch_queue;

@interface AMSFollowUp : NSObject

{
    FLFollowUpController *_followUpController;
    NSObject<OS_dispatch_queue> *_followUpQueue;
}

@property (retain, nonatomic) FLFollowUpController *followUpController;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *followUpQueue;

- (id)init;
- (id)postFollowUpItem:(id)arg1;
- (id)pendingFollowUps;
- (id)clearFollowUpItem:(id)arg1;
- (id)clearFollowUpWithIdentifier:(id)arg1 account:(id)arg2;
- (id)_pendingFollowUpWithBackingIdentifier:(id)arg1 error:(id *)arg2;
- (id)pendingFollowUpsForAccount:(id)arg1;
- (id)pendingFollowUpWithIdentifier:(id)arg1 account:(id)arg2;

@end
