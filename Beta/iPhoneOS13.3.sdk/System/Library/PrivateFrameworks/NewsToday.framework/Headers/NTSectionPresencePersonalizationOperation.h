/*
 Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

#import <NewsCore/FCOperation.h>

@class FCPersonalizationTreatment, NSArray, NSDictionary;

@protocol FCReadonlyPersonalizationAggregateStore;

@interface NTSectionPresencePersonalizationOperation : FCOperation

{
    id <FCReadonlyPersonalizationAggregateStore> _aggregateStore;
    FCPersonalizationTreatment *_personalizationTreatment;
    NSArray *_absoluteRequests;
    NSArray *_relativeRequests;
    CDUnknownBlockType _personalizationCompletion;
    NSDictionary *_result;
}

@property (copy, nonatomic) NSDictionary *result;
@property (retain, nonatomic) id <FCReadonlyPersonalizationAggregateStore> aggregateStore;
@property (copy, nonatomic) FCPersonalizationTreatment *personalizationTreatment;
@property (copy, nonatomic) NSArray *absoluteRequests;
@property (copy, nonatomic) NSArray *relativeRequests;
@property (copy, nonatomic) CDUnknownBlockType personalizationCompletion;

- (id)init;
- (_Bool)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)arg1;

@end
