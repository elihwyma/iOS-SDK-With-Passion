/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PXGPPTLayoutTesterItemInput : NSObject

{
    struct CGSize _size;
    double _weight;
    struct CGRect _preferredCropRect;
    struct CGRect _acceptableCropRect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) double weight;
@property (nonatomic, readonly) struct CGAffineTransform transform;
@property (nonatomic, readonly) struct CGPoint positionOffset;
@property (nonatomic, readonly) struct CGRect preferredCropRect;
@property (nonatomic, readonly) struct CGRect acceptableCropRect;

+ (id)createItemInputsForCount:(long long)arg1;

- (double)weightUsingCriterion:(long long)arg1;

@end
