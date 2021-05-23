/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentSizer.h>

@protocol SXIssueCoverLayoutAttributesFactory;

@interface SXIssueCoverComponentSizer : SXComponentSizer

{
    id <SXIssueCoverLayoutAttributesFactory> _layoutOptionsFactory;
}

@property (nonatomic, readonly) id <SXIssueCoverLayoutAttributesFactory> layoutOptionsFactory;

- (double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 DOMObjectProvider:(id)arg4 layoutOptions:(id)arg5 layoutOptionsFactory:(id)arg6;

@end
