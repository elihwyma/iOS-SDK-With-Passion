/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class NSData;

@interface GEOJunction : NSObject <Swift>

{
    int _maneuverType;
    int _drivingSide;
    int _junctionType;
    NSData *_elementsData;
}

@property (nonatomic, readonly) int maneuverType;
@property (nonatomic, readonly) int drivingSide;
@property (nonatomic, readonly) int junctionType;
@property (nonatomic, readonly) struct GEOJunctionElement *elements;
@property (nonatomic, readonly) unsigned long long numElements;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStep:(id)arg1;
- (id)initWithManeuverType:(int)arg1 drivingSide:(int)arg2;
- (id)initWithJunctionInfo:(id)arg1;

@end
