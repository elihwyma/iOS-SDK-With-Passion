/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIFeature.h>

@class NSArray, NSString;

@interface CITextFeature : CIFeature

{
    NSArray *subFeatures;
    NSString *messageString;
    struct CGPoint topLeft;
    struct CGPoint topRight;
    struct CGPoint bottomLeft;
    struct CGPoint bottomRight;
    struct CGRect bounds;
}

@property (readonly) NSString *messageString;
@property (readonly) struct CGRect bounds;
@property (readonly) struct CGPoint topLeft;
@property (readonly) struct CGPoint topRight;
@property (readonly) struct CGPoint bottomLeft;
@property (readonly) struct CGPoint bottomRight;
@property (readonly) NSArray *subFeatures;

- (void)dealloc;
- (id)type;
- (id)initWithBounds:(struct CGRect)arg1 topLeft:(struct CGPoint)arg2 topRight:(struct CGPoint)arg3 bottomLeft:(struct CGPoint)arg4 bottomRight:(struct CGPoint)arg5 subFeatures:(id)arg6 messageString:(id)arg7;

@end
