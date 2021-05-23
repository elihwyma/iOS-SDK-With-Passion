/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface PFUbiquityRecordsImporterSchedulingContext : NSObject

{
    NSMutableSet *_scheduledLogLocations;
    NSMutableSet *_pendingLogLocations;
    NSMutableSet *_failedLogLocations;
    NSMutableSet *_ignoredLogLocations;
    NSMutableDictionary *_logLocationsToEncounteredErrors;
    int _lock;
}

@property (nonatomic, readonly) NSSet *pendingLogLocations;
@property (nonatomic, readonly) NSSet *scheduledLogLocations;
@property (nonatomic, readonly) NSSet *failedLogLocations;
@property (nonatomic, readonly) NSSet *ignoredLogLocations;
@property (nonatomic, readonly) NSDictionary *logLocationsToEncounteredErrors;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)transactionLogAtLocation:(id)arg1 failedToOpenWithError:(id)arg2;
- (void)transactionLogAtLocationWasIgnored:(id)arg1;
- (void)transactionLogAtLocationWasScheduled:(id)arg1;
- (void)addPendingLogLocation:(id)arg1;
- (void)addPendingLogLocations:(id)arg1;
- (id)initWithPendingLogLocations:(id)arg1;
- (void)failedTransactionLogAtLocationRecovered:(id)arg1;
- (void)unionWithSchedulingContext:(id)arg1;

@end
