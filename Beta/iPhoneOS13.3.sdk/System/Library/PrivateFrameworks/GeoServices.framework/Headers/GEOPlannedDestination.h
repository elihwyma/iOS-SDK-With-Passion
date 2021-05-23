/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class NSData, NSDate;

@interface GEOPlannedDestination : NSObject <Swift>

{
    NSDate *_arrivalDate;
    NSDate *_expirationDate;
    int _transportType;
    NSData *_handle;
}

@property (retain, nonatomic) NSDate *arrivalDate;
@property (retain, nonatomic) NSDate *expirationDate;
@property (nonatomic) int transportType;
@property (nonatomic, readonly) NSData *handle;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)initWithMapItem:(id)arg1;
- (id)initWithMapItemHandle:(id)arg1;

@end
