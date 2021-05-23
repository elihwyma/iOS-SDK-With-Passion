/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SWReachabilityProvider, SXResourceDataSourceProvider;

@interface SXImageViewFactory : NSObject

{
    id <SXResourceDataSourceProvider> _resourceDataSourceProvider;
    id <SWReachabilityProvider> _reachabilityProvider;
}

@property (nonatomic, readonly) id <SXResourceDataSourceProvider> resourceDataSourceProvider;
@property (nonatomic, readonly) id <SWReachabilityProvider> reachabilityProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)imageViewForResource:(id)arg1;
- (id)repeatableImageViewForResource:(id)arg1;
- (id)initWithResourceDataSourceProvider:(id)arg1 reachabilityProvider:(id)arg2;

@end
