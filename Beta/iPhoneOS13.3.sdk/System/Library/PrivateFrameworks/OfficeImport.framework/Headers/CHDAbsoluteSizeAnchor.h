/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CHDAnchor.h>

__attribute__((visibility("hidden")))
@interface CHDAbsoluteSizeAnchor : CHDAnchor

{
    struct CGPoint mFrom;
    struct CGSize mSize;
}

- (struct CGSize)size;
- (void)setSize:(struct CGSize)arg1;
- (struct CGPoint)from;
- (void)setFrom:(struct CGPoint)arg1;

@end
