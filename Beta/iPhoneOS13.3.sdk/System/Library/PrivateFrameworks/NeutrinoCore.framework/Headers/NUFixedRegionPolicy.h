/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSString, NURegion;

@interface NUFixedRegionPolicy : NSObject

{
    long long _roundingPolicy;
    NURegion *_region;
    CDStruct_1e2b2e48 _scale;
}

@property CDStruct_912cb5d2 scale;
@property long long roundingPolicy;
@property (readonly) NURegion *region;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithRect:(CDStruct_996ac03c)arg1;
- (id)initWithRegion:(id)arg1;
- (id)regionForGeometry:(id)arg1;

@end
