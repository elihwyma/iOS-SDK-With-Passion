/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@interface BBThumbnailSizeConstraints : NSObject

{
    float _fixedWidth;
    float _fixedHeight;
    float _fixedDimension;
    float _minAspectRatio;
    float _maxAspectRatio;
    float _thumbnailScale;
    long long _constraintType;
}

@property (nonatomic) long long constraintType;
@property (nonatomic) float fixedWidth;
@property (nonatomic) float fixedHeight;
@property (nonatomic) float fixedDimension;
@property (nonatomic) float minAspectRatio;
@property (nonatomic) float maxAspectRatio;
@property (nonatomic) float thumbnailScale;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)areReasonable;
- (struct CGSize)sizeFromAspectRatio:(double)arg1;

@end
