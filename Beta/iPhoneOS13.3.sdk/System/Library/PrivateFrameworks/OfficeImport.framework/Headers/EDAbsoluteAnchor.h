/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDAnchor.h>

__attribute__((visibility("hidden")))
@interface EDAbsoluteAnchor : EDAnchor

{
    struct CGPoint mPosition;
    struct CGSize mSize;
}

- (struct CGSize)size;
- (struct CGPoint)position;
- (struct CGRect)bounds;
- (void)setBounds:(struct CGRect)arg1;
- (void)setSize:(struct CGSize)arg1;
- (void)setPosition:(struct CGPoint)arg1;

@end
