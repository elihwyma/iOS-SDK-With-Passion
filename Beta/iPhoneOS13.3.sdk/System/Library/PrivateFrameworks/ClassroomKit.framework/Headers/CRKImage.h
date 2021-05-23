/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

#import <ClassroomKit/Swift-Protocol.h>

@class NSData, NSString, UIImage;

@interface CRKImage : NSObject <Swift>

{
    _Bool _horizontallyFlipped;
    UIImage *_underlyingImage;
}

@property (retain, nonatomic) UIImage *underlyingImage;
@property (nonatomic, getter=isHorizontallyFlipped) _Bool horizontallyFlipped;
@property (nonatomic, readonly) CRKImage *localizedImage;
@property (copy, nonatomic, readonly) NSData *PNGRepresentation;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) struct CGImage *CGImage;
@property (copy, nonatomic) NSString *accessibilityDescription;

+ (_Bool)supportsSecureCoding;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithCGImage:(struct CGImage *)arg1;
+ (id)imageNamed:(id)arg1;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (double)screenScale;
+ (id)imageWithUnderlyingImage:(id)arg1;
+ (id)templateImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)templateImageNamed:(id)arg1;
+ (struct CGImage *)resizedCGImageFromImage:(struct CGImage *)arg1 newSize:(struct CGSize)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToImage:(id)arg1;
- (id)initWithUnderlyingImage:(id)arg1;
- (id)initWithUnderlyingImage:(id)arg1 horizontallyFlipped:(_Bool)arg2;
- (_Bool)layoutIsLeftToRight;
- (id)flippedUnderlyingImage;
- (id)imageByResizingToSize:(struct CGSize)arg1;
- (id)imageByEnlargingCanvasToSize:(struct CGSize)arg1;
- (id)imageByAspectFittingToBox:(struct CGSize)arg1;
- (id)JPEGRepresentationWithCompressionFactor:(double)arg1;
- (_Bool)isLargerThanSize:(struct CGSize)arg1;

@end
