//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphLocationNode.h>

#import <PhotosGraph/PGGraphPortraitLocationNamedEntity-Protocol.h>

@class PPLocationNamedEntities;

@interface PGGraphAddressNode : PGGraphLocationNode <PGGraphPortraitLocationNamedEntity>
{
}

- (id)UUID;
- (void)enumeratePersonHomeOrWorkNodesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)isPersonHomeOrWorkAddress;
- (id)location;
- (struct CLLocationCoordinate2D)coordinate;
- (BOOL)isOcean;
- (BOOL)locationIsImproved;
- (void)addressEnumerateMomentNodesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateAreaNodesUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (id)countryNode;
- (id)stateNode;
- (id)cityNode;
- (id)districtNode;
- (id)streetNode;
- (id)areaNodes;
@property(readonly, nonatomic) PPLocationNamedEntities *pg_locationNamedEntity;

@end

