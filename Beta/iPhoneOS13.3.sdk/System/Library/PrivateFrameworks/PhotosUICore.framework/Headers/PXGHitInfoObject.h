/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@interface PXGHitInfoObject : NSObject

{
    struct {
        unsigned int spriteIndex;
        double paddedDistance;
        double unpaddedDistance;
        struct {
            CDStruct_719d24f9 center;
            MISSING_TYPE *size;
        } geometry;
    } _hitInfo;
}

@property (nonatomic, readonly) CDStruct_87acf924 *hitInfo;

- (id)init;
- (long long)compare:(id)arg1;
- (id)initWithHitInfo:(CDStruct_87acf924)arg1;

@end
