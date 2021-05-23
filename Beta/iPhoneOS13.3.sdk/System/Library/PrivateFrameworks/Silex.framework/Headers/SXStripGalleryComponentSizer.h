/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentSizer.h>

@interface SXStripGalleryComponentSizer : SXComponentSizer

- (id)imageResources;
- (double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2;
- (unsigned long long)shouldIgnoreMarginsForColumnLayout:(id)arg1;
- (unsigned long long)shouldIgnoreViewportPaddingForColumnLayout:(id)arg1;
- (struct _NSRange)overrideColumnLayoutForColumnRange:(struct _NSRange)arg1 inColumnLayout:(id)arg2;
- (double)contentWidthForColumnLayout:(id)arg1;
- (double)xOffsetForColumnLayout:(id)arg1;
- (double)rightContentInsetForColumnLayout:(id)arg1;

@end
