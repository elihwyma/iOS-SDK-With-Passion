/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <PBCodable.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSMutableArray;

@interface ICCloudContentTastePBFusePreferences : PBCodable <Swift>

{
    NSMutableArray *_preferences;
}

@property (retain, nonatomic) NSMutableArray *preferences;

+ (Class)preferencesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addPreferences:(id)arg1;
- (void)clearPreferences;
- (unsigned long long)preferencesCount;
- (id)preferencesAtIndex:(unsigned long long)arg1;

@end
