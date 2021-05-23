/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NTPBPullToRefresh : PBCodable

{
    NSString *_viewId;
    int _viewType;
    CDStruct_372a990c _has;
}

@property (nonatomic) _Bool hasViewType;
@property (nonatomic) int viewType;
@property (nonatomic, readonly) _Bool hasViewId;
@property (retain, nonatomic) NSString *viewId;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)viewTypeAsString:(int)arg1;
- (int)StringAsViewType:(id)arg1;

@end
