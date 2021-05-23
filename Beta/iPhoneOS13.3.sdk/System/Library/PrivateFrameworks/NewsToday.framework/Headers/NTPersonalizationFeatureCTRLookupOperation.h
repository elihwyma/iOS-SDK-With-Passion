/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <NewsCore/FCOperation.h>

@class FCPersonalizationTreatment, NSArray, NSDictionary;

@protocol FCReadonlyPersonalizationAggregateStore;

@interface NTPersonalizationFeatureCTRLookupOperation : FCOperation

{
    id <FCReadonlyPersonalizationAggregateStore> _aggregateStore;
    FCPersonalizationTreatment *_personalizationTreatment;
    NSArray *_lookupRequests;
    CDUnknownBlockType _lookupCompletion;
    NSDictionary *_result;
}

@property (copy, nonatomic) NSDictionary *result;
@property (retain, nonatomic) id <FCReadonlyPersonalizationAggregateStore> aggregateStore;
@property (copy, nonatomic) FCPersonalizationTreatment *personalizationTreatment;
@property (copy, nonatomic) NSArray *lookupRequests;
@property (copy, nonatomic) CDUnknownBlockType lookupCompletion;

- (id)init;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;

@end
