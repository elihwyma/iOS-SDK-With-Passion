/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class CKRecord, FCCKPrivateDatabase, FCPersonalizationTreatment, NSArray, NSError, NTPBPersonalizationProfile;

@interface FCModifyPersonalizationOperation : FCOperation

{
    FCCKPrivateDatabase *_database;
    NSArray *_changeGroups;
    FCPersonalizationTreatment *_treatment;
    CKRecord *_remoteRecord;
    CDUnknownBlockType _saveCompletionHandler;
    NTPBPersonalizationProfile *_savedProfile;
    CKRecord *_savedRecord;
    NSError *_resultError;
}

@property (retain, nonatomic) NTPBPersonalizationProfile *savedProfile;
@property (retain, nonatomic) CKRecord *savedRecord;
@property (retain, nonatomic) NSError *resultError;
@property (retain, nonatomic) FCCKPrivateDatabase *database;
@property (retain, nonatomic) NSArray *changeGroups;
@property (retain, nonatomic) FCPersonalizationTreatment *treatment;
@property (retain, nonatomic) CKRecord *remoteRecord;
@property (copy, nonatomic) CDUnknownBlockType saveCompletionHandler;

+ (id)personalizationProfileFromRecord:(id)arg1;
+ (void)applyChangeGroups:(id)arg1 toProfile:(id)arg2 treatment:(id)arg3 prune:(_Bool)arg4;
+ (void)pruneAggregates:(id)arg1;
+ (void)applyDeltas:(id)arg1 toProfile:(id)arg2 treatment:(id)arg3 prune:(_Bool)arg4;

- (unsigned long long)maxRetries;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;
- (_Bool)canRetryWithError:(id)arg1 retryAfter:(id *)arg2;
- (void)resetForRetry;

@end
