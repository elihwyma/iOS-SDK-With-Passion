/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSError, NSXPCConnection;

@interface _CDInteractionAdvisor : NSObject

{
    NSXPCConnection *_connection;
    NSError *_error;
}

@property (retain, nonatomic) NSError *error;

+ (id)interactionAdvisor;

- (void)dealloc;
- (id)initWithServiceName:(id)arg1;
- (id)rankCandidateContacts:(id)arg1 usingSettings:(id)arg2;
- (id)adviseInteractionsUsingSettings:(id)arg1;
- (id)adviseInteractionsForDate:(id)arg1 usingSettings:(id)arg2;
- (id)adviseInteractionsForLocation:(id)arg1 usingSettings:(id)arg2;
- (id)adviseSocialInteractionsForDate:(id)arg1 andSeedContacts:(id)arg2 usingSettings:(id)arg3;
- (id)adviseInteractionsForKeywordsInString:(id)arg1 usingSettings:(id)arg2;
- (void)tuneSocialAdvisorUsingSettings:(id)arg1 heartBeatHandler:(id)arg2;

@end
