/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@protocol NUTaggedSpaceMapping;

@interface NUImageGeometry : NSObject

{
    long long _orientation;
    id <NUTaggedSpaceMapping> _spaceMap;
    CDStruct_1e2b2e48 _renderScale;
    CDStruct_996ac03c _extent;
}

@property (nonatomic, readonly) id <NUTaggedSpaceMapping> spaceMap;
@property (nonatomic, readonly) struct CGRect scaledExtent;
@property (nonatomic, readonly) CDStruct_912cb5d2 scaledSize;
@property (nonatomic, readonly) CDStruct_996ac03c extent;
@property (nonatomic, readonly) CDStruct_912cb5d2 size;
@property (nonatomic, readonly) CDStruct_912cb5d2 renderScale;
@property (nonatomic, readonly) long long orientation;

- (id)init;
- (id)description;
- (id)transformWithSourceSpace:(id)arg1 destinationSpace:(id)arg2 error:(out id *)arg3;
- (id)initWithExtent:(CDStruct_996ac03c)arg1 renderScale:(CDStruct_912cb5d2)arg2;
- (id)initWithExtent:(CDStruct_996ac03c)arg1 renderScale:(CDStruct_912cb5d2)arg2 orientation:(long long)arg3;
- (id)initWithExtent:(CDStruct_996ac03c)arg1 renderScale:(CDStruct_912cb5d2)arg2 orientation:(long long)arg3 spaceMap:(id)arg4;

@end
