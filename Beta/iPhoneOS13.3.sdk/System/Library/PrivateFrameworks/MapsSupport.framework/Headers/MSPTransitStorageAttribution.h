/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSMutableArray, NSString, PBUnknownFields;

@interface MSPTransitStorageAttribution : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_providerNames;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=_providerNames) NSArray *providerNames;
@property (retain, nonatomic) NSMutableArray *providerNames;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)providerNamesType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)providerNamesCount;
- (void)clearProviderNames;
- (id)initWithAttribution:(id)arg1;
- (void)addProviderNames:(id)arg1;
- (id)providerNamesAtIndex:(unsigned long long)arg1;

@end
