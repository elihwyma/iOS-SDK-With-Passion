/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface NTPBFeedViewport : PBCodable

{
    unsigned long long _feedDBVersion;
    unsigned long long _version;
    NSMutableArray *_elements;
    NSString *_identifier;
    NSMutableArray *_sharedStrings;
    struct {
        unsigned int feedDBVersion:1;
        unsigned int version:1;
    } _has;
}

@property (nonatomic) _Bool hasVersion;
@property (nonatomic) unsigned long long version;
@property (nonatomic) _Bool hasFeedDBVersion;
@property (nonatomic) unsigned long long feedDBVersion;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableArray *elements;
@property (retain, nonatomic) NSMutableArray *sharedStrings;

+ (Class)elementsType;
+ (Class)sharedStringsType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addElements:(id)arg1;
- (void)addSharedStrings:(id)arg1;
- (void)clearElements;
- (unsigned long long)elementsCount;
- (id)elementsAtIndex:(unsigned long long)arg1;
- (void)clearSharedStrings;
- (unsigned long long)sharedStringsCount;
- (id)sharedStringsAtIndex:(unsigned long long)arg1;

@end
