/*
 Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

#import <NSObject.h>

@interface CARScreenViewArea : NSObject

{
    _Bool _displaysTransitionControl;
    struct CGRect _visibleFrame;
    struct CGRect _safeFrame;
}

@property (nonatomic, readonly) struct CGRect visibleFrame;
@property (nonatomic, readonly) struct CGRect safeFrame;
@property (nonatomic, readonly) _Bool displaysTransitionControl;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithPropertySupplier:(CDUnknownBlockType)arg1 additionalInsets:(struct NSEdgeInsets)arg2;
- (_Bool)isEqualToViewArea:(id)arg1;
- (id)initWithPropertySupplier:(CDUnknownBlockType)arg1;

@end
