//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString;

@interface NTPBPullToRefresh : PBCodable <NSCopying>
{
    NSString *_viewId;
    int _viewType;
    CDStruct_372a990c _has;
}

@property(retain, nonatomic) NSString *viewId; // @synthesize viewId=_viewId;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasViewId;
- (int)StringAsViewType:(id)arg1;
- (id)viewTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasViewType;
@property(nonatomic) int viewType; // @synthesize viewType=_viewType;

@end

