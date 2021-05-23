/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface BCAnnotationsProtoBook : PBCodable

{
    NSMutableArray *_annotations;
    NSString *_appVersion;
    NSString *_assetID;
    NSString *_assetVersion;
}

@property (retain, nonatomic) NSString *assetID;
@property (retain, nonatomic) NSString *appVersion;
@property (nonatomic, readonly) _Bool hasAssetVersion;
@property (retain, nonatomic) NSString *assetVersion;
@property (retain, nonatomic) NSMutableArray *annotations;

+ (Class)annotationType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addAnnotation:(id)arg1;
- (void)clearAnnotations;
- (unsigned long long)annotationsCount;
- (id)annotationAtIndex:(unsigned long long)arg1;

@end
