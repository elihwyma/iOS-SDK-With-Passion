/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDDonationController, EDInteractionEventLogFile, EDInteractionEventLogUploader, EDInteractionLogger;

@interface EDCategorySubsystem : NSObject

{
    EDInteractionLogger *_interactionLogger;
    EDDonationController *_donationController;
    EDInteractionEventLogUploader *_logUploader;
    EDInteractionEventLogFile *_logFile;
}

@property (retain, nonatomic) EDInteractionEventLogUploader *logUploader;
@property (retain, nonatomic) EDInteractionEventLogFile *logFile;
@property (nonatomic, readonly) EDInteractionLogger *interactionLogger;
@property (nonatomic, readonly) EDDonationController *donationController;

- (void)_schedulePETSubmissionActivityForLog:(id)arg1;
- (id)initWithPersistence:(id)arg1 userProfileProvider:(id)arg2 vipManager:(id)arg3 sourceApplicationBundleIdentifier:(id)arg4;

@end
