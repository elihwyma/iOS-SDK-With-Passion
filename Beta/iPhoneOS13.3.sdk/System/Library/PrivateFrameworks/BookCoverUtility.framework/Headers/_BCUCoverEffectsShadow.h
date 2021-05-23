/*
 Image: /System/Library/PrivateFrameworks/BookCoverUtility.framework/BookCoverUtility
 */

#import <NSObject.h>

@class NSString;

@interface _BCUCoverEffectsShadow : NSObject

{
    struct CGImage *_image;
    NSString *_blendMode;
    struct UIEdgeInsets _insets;
}

@property (nonatomic, readonly) struct UIEdgeInsets insets;
@property (nonatomic, readonly) struct CGImage *image;
@property (nonatomic, readonly) NSString *blendMode;

- (struct CGSize)size;
- (struct CGRect)contentsCenter;
- (id)initWithImage:(struct CGImage *)arg1 insets:(struct UIEdgeInsets)arg2 blendMode:(id)arg3;
- (id)initWithImage:(struct CGImage *)arg1 insets:(struct UIEdgeInsets)arg2;
- (struct UIEdgeInsets)roundedInsetsWithSize:(struct CGSize)arg1;

@end
