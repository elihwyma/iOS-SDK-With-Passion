/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentSizer.h>

@protocol SXEmbedService;

@interface SXEmbedComponentSizer : SXComponentSizer

{
    id <SXEmbedService> _embedService;
}

@property (nonatomic, readonly) id <SXEmbedService> embedService;

- (double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2;
- (struct _NSRange)overrideColumnLayoutForColumnRange:(struct _NSRange)arg1 inColumnLayout:(id)arg2;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 DOMObjectProvider:(id)arg4 layoutOptions:(id)arg5 embedService:(id)arg6;

@end
