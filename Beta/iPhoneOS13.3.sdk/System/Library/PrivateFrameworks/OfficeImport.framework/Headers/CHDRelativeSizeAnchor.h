/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CHDAnchor.h>

__attribute__((visibility("hidden")))
@interface CHDRelativeSizeAnchor : CHDAnchor

{
    struct CGPoint mFrom;
    struct CGPoint mTo;
}

- (struct CGPoint)to;
- (struct CGPoint)from;
- (void)setFrom:(struct CGPoint)arg1;
- (void)setTo:(struct CGPoint)arg1;

@end
