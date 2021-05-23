/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NUAdContextProvider, NUAdControllerFactory, NUAdLayoutOptionsFactory, NUAdMetadataFactory, NUAdProvider, NUDevice;

@interface NUANFArticleAdManagerFactory : NSObject

{
    id <NUAdProvider> _adProvider;
    id <NUAdMetadataFactory> _adMetadataFactory;
    id <NUAdControllerFactory> _adControllerFactory;
    id <NUDevice> _device;
    id <NUAdLayoutOptionsFactory> _layoutOptionsFactory;
    id <NUAdContextProvider> _subscriptionAdContextProvider;
}

@property (nonatomic, readonly) id <NUAdProvider> adProvider;
@property (nonatomic, readonly) id <NUAdMetadataFactory> adMetadataFactory;
@property (nonatomic, readonly) id <NUAdControllerFactory> adControllerFactory;
@property (nonatomic, readonly) id <NUDevice> device;
@property (nonatomic, readonly) id <NUAdLayoutOptionsFactory> layoutOptionsFactory;
@property (nonatomic, readonly) id <NUAdContextProvider> subscriptionAdContextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createArticleAdManagerForArticle:(id)arg1 issue:(id)arg2;
- (id)initWithAdProvider:(id)arg1 adMetadataFactory:(id)arg2 adControllerFactory:(id)arg3 device:(id)arg4 layoutOptionsFactory:(id)arg5 subscriptionAdContextProvider:(id)arg6;

@end
