/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSMutableArray, NSString;

@interface MPPSearchStringPredicate : PBCodable <Swift>

{
    NSMutableArray *_properties;
    NSString *_searchString;
}

@property (nonatomic, readonly) _Bool hasSearchString;
@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) NSMutableArray *properties;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addProperties:(id)arg1;
- (unsigned long long)propertiesCount;
- (void)clearProperties;
- (id)propertiesAtIndex:(unsigned long long)arg1;

@end
