/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class CLRegionInternal, NSString;

@interface CLRegion : NSObject

{
    CLRegionInternal *_internal;
}

@property (nonatomic, readonly) CDStruct_4c505072 clientRegion;
@property (copy, nonatomic) NSString *onBehalfOfBundleId;
@property (nonatomic) _Bool conservativeEntry;
@property (nonatomic) int referenceFrame;
@property (nonatomic) _Bool emergency;
@property (nonatomic, readonly) struct CLLocationCoordinate2D center;
@property (nonatomic, readonly) double radius;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic) _Bool notifyOnEntry;
@property (nonatomic) _Bool notifyOnExit;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithClientRegion:(CDStruct_4c505072)arg1;
- (id)initCircularRegionWithCenter:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2 identifier:(id)arg3;
- (id)_initWithCoder:(id)arg1;
- (void)_encodeWithCoder:(id)arg1;
- (_Bool)containsCoordinate:(struct CLLocationCoordinate2D)arg1;

@end
