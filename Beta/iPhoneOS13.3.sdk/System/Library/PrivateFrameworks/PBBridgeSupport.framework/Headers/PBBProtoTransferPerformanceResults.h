/*
 Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface PBBProtoTransferPerformanceResults : PBCodable

{
    NSMutableArray *_macroActivites;
    NSMutableArray *_measures;
    NSMutableArray *_milestones;
}

@property (retain, nonatomic) NSMutableArray *milestones;
@property (retain, nonatomic) NSMutableArray *measures;
@property (retain, nonatomic) NSMutableArray *macroActivites;

+ (Class)milestonesType;
+ (Class)measuresType;
+ (Class)macroActivitesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addMilestones:(id)arg1;
- (void)addMeasures:(id)arg1;
- (void)addMacroActivites:(id)arg1;
- (unsigned long long)milestonesCount;
- (void)clearMilestones;
- (id)milestonesAtIndex:(unsigned long long)arg1;
- (unsigned long long)measuresCount;
- (void)clearMeasures;
- (id)measuresAtIndex:(unsigned long long)arg1;
- (unsigned long long)macroActivitesCount;
- (void)clearMacroActivites;
- (id)macroActivitesAtIndex:(unsigned long long)arg1;

@end
