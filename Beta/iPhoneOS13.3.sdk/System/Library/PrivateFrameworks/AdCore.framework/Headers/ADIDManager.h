/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <AdCore/ADSingleton.h>

@class DSIDRecord, NSArray, NSDictionary, NSString;

@interface ADIDManager : ADSingleton

{
    DSIDRecord *_activeDSIDRecord;
    NSDictionary *_usageVectors;
    NSArray *_monthlyResetArray;
}

@property (retain) NSArray *monthlyResetArray;
@property (retain, nonatomic) NSDictionary *usageVectors;
@property (retain) DSIDRecord *activeDSIDRecord;
@property (nonatomic, readonly) long long IDFAMonthResetCount;
@property (nonatomic, readonly) NSString *IDFA;

+ (id)sharedInstance;

- (id)init;
- (id)deviceIdentifiers;
- (void)forceReconcile:(CDUnknownBlockType)arg1;
- (id)idForClientType:(long long)arg1;
- (id)reloadRecords:(id)arg1;
- (void)logIDs:(id)arg1;
- (id)encryptedIDForClientType:(long long)arg1;
- (_Bool)loadIDs;
- (id)loadFakeRecord:(id)arg1;
- (id)dsidRecord:(id)arg1 fromDict:(id)arg2;
- (id)readUsageVectors:(id)arg1;
- (void)reloadRecords:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)retrieveDeviceIDs;

@end
