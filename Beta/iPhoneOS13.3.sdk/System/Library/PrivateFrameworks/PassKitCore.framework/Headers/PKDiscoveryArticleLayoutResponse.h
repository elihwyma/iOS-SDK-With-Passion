/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKDiscoveryWebServiceResponse.h>

@class PKDiscoveryArticleLayout;

@interface PKDiscoveryArticleLayoutResponse : PKDiscoveryWebServiceResponse

{
    PKDiscoveryArticleLayout *_discoveryArticleLayout;
}

@property (nonatomic, readonly) PKDiscoveryArticleLayout *discoveryArticleLayout;

- (id)initWithData:(id)arg1;

@end
