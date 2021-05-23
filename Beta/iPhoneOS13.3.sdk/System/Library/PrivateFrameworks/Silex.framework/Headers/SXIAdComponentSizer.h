/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentSizer.h>

@class SXAdController;

@interface SXIAdComponentSizer : SXComponentSizer

{
    SXAdController *_adController;
}

@property (nonatomic, readonly) SXAdController *adController;

- (double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2;
- (unsigned long long)shouldIgnoreMarginsForColumnLayout:(id)arg1;
- (unsigned long long)shouldIgnoreViewportPaddingForColumnLayout:(id)arg1;
- (struct _NSRange)overrideColumnLayoutForColumnRange:(struct _NSRange)arg1 inColumnLayout:(id)arg2;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 DOMObjectProvider:(id)arg4 layoutOptions:(id)arg5 adController:(id)arg6;

@end
