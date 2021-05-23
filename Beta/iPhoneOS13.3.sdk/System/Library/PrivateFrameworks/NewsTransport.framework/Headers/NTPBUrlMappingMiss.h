/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface NTPBUrlMappingMiss : PBCodable

{
    NSString *_host;
    NSMutableArray *_paths;
    NSString *_url;
}

@property (nonatomic, readonly) _Bool hasUrl;
@property (retain, nonatomic) NSString *url;
@property (nonatomic, readonly) _Bool hasHost;
@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) NSMutableArray *paths;

+ (Class)pathsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (unsigned long long)pathsCount;
- (void)clearPaths;
- (void)addPaths:(id)arg1;
- (id)pathsAtIndex:(unsigned long long)arg1;

@end
