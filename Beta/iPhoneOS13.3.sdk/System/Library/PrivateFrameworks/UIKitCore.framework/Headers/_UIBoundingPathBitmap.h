/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIBoundingPathBitmap : NSObject <Swift>

{
    struct _UIBoundingPathBitmapData _bitmapData;
}

@property (nonatomic, readonly) struct _UIBoundingPathBitmapData bitmapData;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)debugQuickLookObject;
- (id)initWithBitmapData:(struct _UIBoundingPathBitmapData)arg1;
- (id)boundingPathBitmapWithRect:(struct _UIIntegralRect)arg1 cornerRadii:(struct _UIIntegralCornerRadii)arg2;
- (id)_imageRepresentation;
- (id)initWithSize:(struct _UIIntegralSize)arg1 containsPoint:(CDUnknownBlockType)arg2;
- (id)boundingPathBitmapWithRect:(struct _UIIntegralRect)arg1;

@end
