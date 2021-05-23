/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <WebCore/WAKView.h>

@interface WAKClipView : WAKView

{
    _Bool _copiesOnScroll;
    WAKView *_documentView;
}

@property (nonatomic, readonly) WAKView *documentView;
@property (nonatomic) _Bool copiesOnScroll;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGRect)documentVisibleRect;
- (void)_setDocumentView:(id)arg1;

@end
