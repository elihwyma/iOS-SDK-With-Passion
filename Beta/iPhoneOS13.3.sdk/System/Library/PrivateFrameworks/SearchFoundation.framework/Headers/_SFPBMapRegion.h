/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/Swift-Protocol.h>

@class NSData, NSString;

@interface _SFPBMapRegion : PBCodable <Swift>

{
    double _southLat;
    double _westLng;
    double _northLat;
    double _eastLng;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) double southLat;
@property (nonatomic) double westLng;
@property (nonatomic) double northLat;
@property (nonatomic) double eastLng;
@property (nonatomic, readonly) NSData *jsonData;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;

@end
