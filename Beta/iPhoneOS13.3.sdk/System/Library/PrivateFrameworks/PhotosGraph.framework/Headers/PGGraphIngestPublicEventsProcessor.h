/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface PGGraphIngestPublicEventsProcessor : NSObject

{
    NSDictionary *_publicEventCriteriaByCategory;
}

@property (nonatomic, readonly) NSDictionary *publicEventCriteriaByCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)shouldRunWithGraphUpdate:(id)arg1;
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)_insertPublicEventsFromMomentNodes:(id)arg1 graphUpdate:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)disambiguateEvents:(id)arg1 forTimeLocationTuple:(id)arg2 momentNode:(id)arg3 graph:(id)arg4;
- (void)_collectConsolidatedAddressesForMomentNodes:(id)arg1 inGraph:(id)arg2 consolidatedAddresses:(id *)arg3 consolidatedAddressesByMomentIdentifier:(id *)arg4 momentNodesForConsolidatedAddresses:(id *)arg5;
- (id)_frequentLocationNodesByMomentIdentifierForMomentNodes:(id)arg1 graph:(id)arg2;
- (id)publicEventCriteriaByCategoryInGraph:(id)arg1;

@end
