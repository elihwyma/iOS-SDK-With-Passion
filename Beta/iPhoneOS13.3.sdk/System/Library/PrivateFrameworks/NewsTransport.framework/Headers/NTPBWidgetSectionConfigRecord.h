/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, NTPBRecordBase;

@interface NTPBWidgetSectionConfigRecord : PBCodable

{
    NSMutableArray *_articleIDs;
    NSMutableArray *_articleIDs2s;
    NSMutableArray *_articleListIDs;
    NSMutableArray *_articleListIDs2s;
    NTPBRecordBase *_base;
    NSString *_configuration;
    NSString *_configuration2;
}

@property (nonatomic, readonly) _Bool hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (nonatomic, readonly) _Bool hasConfiguration;
@property (retain, nonatomic) NSString *configuration;
@property (retain, nonatomic) NSMutableArray *articleListIDs;
@property (retain, nonatomic) NSMutableArray *articleIDs;
@property (nonatomic, readonly) _Bool hasConfiguration2;
@property (retain, nonatomic) NSString *configuration2;
@property (retain, nonatomic) NSMutableArray *articleListIDs2s;
@property (retain, nonatomic) NSMutableArray *articleIDs2s;

+ (Class)articleListIDsType;
+ (Class)articleIDsType;
+ (Class)articleListIDs2Type;
+ (Class)articleIDs2Type;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addArticleListIDs:(id)arg1;
- (void)addArticleIDs:(id)arg1;
- (void)addArticleListIDs2:(id)arg1;
- (void)addArticleIDs2:(id)arg1;
- (void)clearArticleListIDs;
- (unsigned long long)articleListIDsCount;
- (id)articleListIDsAtIndex:(unsigned long long)arg1;
- (void)clearArticleIDs;
- (unsigned long long)articleIDsCount;
- (id)articleIDsAtIndex:(unsigned long long)arg1;
- (void)clearArticleListIDs2s;
- (unsigned long long)articleListIDs2sCount;
- (id)articleListIDs2AtIndex:(unsigned long long)arg1;
- (void)clearArticleIDs2s;
- (unsigned long long)articleIDs2sCount;
- (id)articleIDs2AtIndex:(unsigned long long)arg1;

@end
