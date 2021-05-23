/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PXLayoutItem : NSObject

{
    double _weight;
    struct CGSize _size;
    struct CGPoint _positionOffset;
    struct CGRect _preferredCropRect;
    struct CGRect _acceptableCropRect;
    struct CGAffineTransform _transform;
}

@property (nonatomic) struct CGSize size;
@property (nonatomic) double weight;
@property (nonatomic) struct CGAffineTransform transform;
@property (nonatomic) struct CGPoint positionOffset;
@property (nonatomic) struct CGRect preferredCropRect;
@property (nonatomic) struct CGRect acceptableCropRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (double)weightUsingCriterion:(long long)arg1;
- (id)initWithSize:(struct CGSize)arg1 weight:(double)arg2;

@end
