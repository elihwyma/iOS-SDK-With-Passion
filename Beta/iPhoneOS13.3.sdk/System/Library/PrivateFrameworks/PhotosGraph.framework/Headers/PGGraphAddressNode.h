/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@class NSString, PPLocationNamedEntities;

@interface PGGraphAddressNode

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) PPLocationNamedEntities *pg_locationNamedEntity;

- (struct CLLocationCoordinate2D)coordinate;
- (id)UUID;
- (id)location;
- (_Bool)isOcean;
- (id)stateNode;
- (void)enumerateAreaNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)areaNodes;
- (id)streetNode;
- (id)districtNode;
- (id)cityNode;
- (id)countryNode;
- (void)addressEnumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)locationIsImproved;
- (_Bool)isPersonHomeOrWorkAddress;
- (void)enumeratePersonHomeOrWorkNodesUsingBlock:(CDUnknownBlockType)arg1;

@end
