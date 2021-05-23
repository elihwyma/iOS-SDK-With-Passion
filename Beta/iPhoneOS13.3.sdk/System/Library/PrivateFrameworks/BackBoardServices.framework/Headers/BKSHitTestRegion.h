/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@interface BKSHitTestRegion : NSObject

{
    struct CGRect _rect;
    struct CGRect _exclusiveTouchNormalizedSubRect;
    struct CGRect _exclusiveTouchNormalizedSubRectInReferenceSpace;
}

@property (nonatomic, readonly, getter=_exclusiveTouchNormalizedSubRectInReferenceSpace) struct CGRect exclusiveTouchNormalizedSubRectInReferenceSpace;
@property (nonatomic, readonly) struct CGRect rect;
@property (nonatomic) struct CGRect exclusiveTouchNormalizedSubRect;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRect:(struct CGRect)arg1;
- (id)initWithRect:(struct CGRect)arg1 exclusiveTouchSubRect:(struct CGRect)arg2;
- (id)_initWithRect:(struct CGRect)arg1 exclusiveTouchNormalizedSubRect:(struct CGRect)arg2;

@end
