/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentSizer.h>

@protocol SWLoadingPolicyProvider;

@interface SXWebContentComponentSizer : SXComponentSizer

{
    id <SWLoadingPolicyProvider> _loadingPolicyProvider;
}

@property (nonatomic, readonly) id <SWLoadingPolicyProvider> loadingPolicyProvider;

- (double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 DOMObjectProvider:(id)arg4 layoutOptions:(id)arg5 loadingPolicyProvider:(id)arg6;

@end
