/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SWLoadingPolicyProvider, SXDOMObjectProviding;

@interface SXWebContentComponentSizerFactory : NSObject

{
    id <SXDOMObjectProviding> _DOMObjectProvider;
    id <SWLoadingPolicyProvider> _loadingPolicyProvider;
}

@property (nonatomic, readonly) id <SXDOMObjectProviding> DOMObjectProvider;
@property (nonatomic, readonly) id <SWLoadingPolicyProvider> loadingPolicyProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) int role;

- (id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4;
- (id)initWithDOMObjectProvider:(id)arg1 loadingPolicyProvider:(id)arg2;

@end
