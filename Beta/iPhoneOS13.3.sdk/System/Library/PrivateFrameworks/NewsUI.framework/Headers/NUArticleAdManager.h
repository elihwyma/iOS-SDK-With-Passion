/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

#import <NewsUI/Swift-Protocol.h>

@class FCArticle, FCIssue, NSString;

@protocol NUAdContextProvider, NUAdControllerFactory, NUAdLayoutOptionsFactory, NUAdMetadataFactory, NUAdProvider, NUDevice;

@interface NUArticleAdManager : NSObject <Swift>

{
    FCArticle *_article;
    FCIssue *_issue;
    id <NUAdProvider> _adProvider;
    id <NUAdControllerFactory> _adControllerFactory;
    id <NUAdMetadataFactory> _adMetadataFactory;
    id <NUDevice> _device;
    id <NUAdLayoutOptionsFactory> _layoutOptionsFactory;
    id <NUAdContextProvider> _subscriptionAdContextProvider;
}

@property (nonatomic, readonly) FCArticle *article;
@property (nonatomic, readonly) FCIssue *issue;
@property (nonatomic, readonly) id <NUAdProvider> adProvider;
@property (nonatomic, readonly) id <NUAdControllerFactory> adControllerFactory;
@property (nonatomic, readonly) id <NUAdMetadataFactory> adMetadataFactory;
@property (nonatomic, readonly) id <NUDevice> device;
@property (nonatomic, readonly) id <NUAdLayoutOptionsFactory> layoutOptionsFactory;
@property (nonatomic, readonly) id <NUAdContextProvider> subscriptionAdContextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)adContextValueForKeyPath:(id)arg1;
- (id)contextProvidersForKeyPath:(id)arg1;
- (void)adController:(id)arg1 componentWithIdentifier:(id)arg2 failedToLoadBannerView:(id)arg3 error:(id)arg4;
- (void)adController:(id)arg1 componentWithIdentifier:(id)arg2 didLoadBannerView:(id)arg3;
- (void)adController:(id)arg1 componentWithIdentifier:(id)arg2 didUnloadBannerView:(id)arg3 withError:(id)arg4;
- (CDUnknownBlockType)adForRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)adControllerForDocument:(id)arg1 viewport:(id)arg2;
- (id)initWithArticle:(id)arg1 issue:(id)arg2 adProvider:(id)arg3 adControllerFactory:(id)arg4 adMetadataFactory:(id)arg5 device:(id)arg6 layoutOptionsFactory:(id)arg7 subscriptionAdContextProvider:(id)arg8;

@end
