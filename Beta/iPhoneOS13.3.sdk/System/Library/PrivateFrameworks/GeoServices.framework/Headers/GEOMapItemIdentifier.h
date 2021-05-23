/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class GEOPDMapsIdentifier, NSData;

@interface GEOMapItemIdentifier : NSObject <Swift>

{
    GEOPDMapsIdentifier *_mapsIdentifier;
}

@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) CDStruct_c3b9c2ee coordinate;
@property (nonatomic, readonly) int resultProviderID;
@property (nonatomic, readonly, getter=hasCoordinate) _Bool hasCoordinate;
@property (nonatomic, readonly) NSData *comparableRepresentation;

+ (_Bool)supportsSecureCoding;
+ (id)mapItemIdentifiersFromMapsIdentifiers:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMUID:(unsigned long long)arg1 resultProviderID:(int)arg2 coordinate:(CDStruct_c3b9c2ee)arg3;
- (id)initWithMapsIdentifier:(id)arg1;
- (id)initWithPlace:(id)arg1;
- (_Bool)isEqualToGEOMapItemIdentifier:(id)arg1;
- (id)initWithMUID:(unsigned long long)arg1 coordinate:(CDStruct_c3b9c2ee)arg2;
- (id)initWithXPCCoder:(id)arg1;
- (void)encodeWithXPCCoder:(id)arg1;
- (id)initWithMUID:(unsigned long long)arg1;
- (id)initWithBasemapId:(unsigned long long)arg1 resultProviderID:(int)arg2 coordinate:(CDStruct_c3b9c2ee)arg3;
- (id)initWithMapItem:(id)arg1;
- (id)mapsIdentifier;
- (id)shortDebugDescription;

@end
