/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDCategorySubsystem, EDPersistence;

@interface EDDaemonInterfaceFactory : NSObject

{
    EDPersistence *_persistence;
    EDCategorySubsystem *_categorySubsystem;
}

@property (retain, nonatomic) EDCategorySubsystem *categorySubsystem;
@property (nonatomic, readonly) EDPersistence *persistence;

- (id)newFetchController;
- (id)initWithPersistence:(id)arg1 categorySubsystem:(id)arg2;
- (id)newAccountRepository;
- (id)newMailboxRepository;
- (id)newMessageRepository;
- (id)newOutgoingMessageRepository;
- (id)newSearchableIndex;
- (id)sharedInteractionLogger;
- (id)sharedDonationController;
- (id)newVIPManagerInterface;
- (id)newActivityRegistry;
- (id)newClientResumerWithForegroundReporter:(id)arg1;

@end
