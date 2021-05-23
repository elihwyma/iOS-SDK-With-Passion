/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKWarpGeometry.h>

@class MISSING_TYPE;

@interface SKWarpGeometryGrid : SKWarpGeometry

{
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> _sourcePositions;
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> _destPositions;
    MISSING_TYPE *_dimensions;
    int _vertexCount;
    _Bool _isIdentityWarp;
}

@property (nonatomic, readonly) const MISSING_TYPE **sourcePositions;
@property (nonatomic, readonly) const MISSING_TYPE **destPositions;
@property (nonatomic, readonly) long long numberOfColumns;
@property (nonatomic, readonly) long long numberOfRows;
@property (nonatomic, readonly) long long vertexCount;

+ (_Bool)supportsSecureCoding;
+ (id)grid;
+ (id)gridWithColumns:(long long)arg1 rows:(long long)arg2 sourcePositions:(const MISSING_TYPE **)arg3 destPositions:(const MISSING_TYPE **)arg4;
+ (id)gridWithColumns:(long long)arg1 rows:(long long)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (_Bool)isIdentityWarp;
- (id)initWithColumns:(long long)arg1 rows:(long long)arg2 sourcePositions:(const MISSING_TYPE **)arg3 destPositions:(const MISSING_TYPE **)arg4;
- (_Bool)isEqualToGrid:(id)arg1;
- (MISSING_TYPE *)sourcePositionAtIndex:(long long)arg1;
- (MISSING_TYPE *)destPositionAtIndex:(long long)arg1;
- (id)gridByReplacingSourcePositions:(const MISSING_TYPE **)arg1;
- (id)gridByReplacingDestPositions:(const MISSING_TYPE **)arg1;

@end
