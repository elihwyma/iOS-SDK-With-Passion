/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGraphicsRendererContext.h>

@interface UIGraphicsPDFRendererContext : UIGraphicsRendererContext

{
    _Bool _inPage;
    struct CGRect _documentBounds;
    struct CGRect _pageBounds;
}

@property struct CGRect documentBounds;
@property struct CGRect pageBounds;
@property _Bool inPage;
@property (nonatomic, readonly) struct CGRect pdfContextBounds;

- (void)updateAuxInfo:(id)arg1;
- (void)beginPageWithBounds:(struct CGRect)arg1 pageInfo:(id)arg2;
- (void)beginPage;
- (void)setURL:(id)arg1 forRect:(struct CGRect)arg2;
- (void)addDestinationWithName:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)setDestinationWithName:(id)arg1 forRect:(struct CGRect)arg2;

@end
