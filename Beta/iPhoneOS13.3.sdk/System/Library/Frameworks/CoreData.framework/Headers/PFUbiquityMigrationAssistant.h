/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityMigrationAssistant : NSObject

{
    NSString *_ubiquityName;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSMutableDictionary *_baselineLocationsByVersionHash;
    NSMutableDictionary *_logLocationsByVersionHash;
    NSMutableArray *_receiptLocations;
    NSMutableArray *_orderedReceipts;
    NSString *_previousModelVersionHash;
    NSString *_currentModelVersionHash;
}

@property (nonatomic, readonly) NSString *previousModelVersionHash;
@property (nonatomic, readonly) NSString *currentModelVersionHash;

- (void)dealloc;
- (id)initWithUbiquityRootLocation:(id)arg1 peerID:(id)arg2 ubiquityName:(id)arg3 modelVersionHash:(id)arg4;
- (id)transactionLogLocationsForModelVersionHash:(id)arg1;
- (id)transactionLogLocationsByModelVersionHash;
- (id)baselineLocationsByModelVersionHash;
- (id)latestBaselineLocationSkipModelVersionHash:(id)arg1;
- (void)_populateBaselineAndTransactionLogLocations;
- (id)receiptLocations;
- (_Bool)canUseReceipts;
- (id)orderedReceipts;
- (id)latestTransactionLogForModelVersionHash:(id)arg1;
- (_Bool)electPreviousModelVersionHashFromTransactionLogsError:(id *)arg1;

@end
