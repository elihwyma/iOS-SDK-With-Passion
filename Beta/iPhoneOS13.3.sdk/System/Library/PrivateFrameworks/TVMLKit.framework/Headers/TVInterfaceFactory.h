/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

#import <TVMLKit/Swift-Protocol.h>

@class NSMutableDictionary, NSString, TVMLViewFactory, TVStyleSheetRegistry, _TVControllerFactory, _TVLockupFactory, _TVTemplateFactory;

@protocol TVInterfaceCreating;

@interface TVInterfaceFactory : NSObject <Swift>

{
    struct {
        unsigned int respondsToViewForElement:1;
        unsigned int respondsToViewControllerForElement:1;
        unsigned int respondsToURLForResource:1;
        unsigned int respondsToImageForResource:1;
        unsigned int respondsToCollectionViewCellClassForElement:1;
        unsigned int respondsToPlayerViewControllerForPlayer:1;
        unsigned int respondsToViewForIKElement:1;
        unsigned int respondsToViewControllerForIKElement:1;
        unsigned int respondsToCollectionViewCellClassForIKElement:1;
        unsigned int respondsToParseAppConfigutaionForElement:1;
        unsigned int respondsToParseAppConfigutaionForIKElement:1;
        unsigned int respondsToImageProxyForIKElement:1;
        unsigned int respondsToImageProxyForElement:1;
        unsigned int respondsToStyleSheetURLForTemplate:1;
        unsigned int respondsToNavigationControllerForTabIdentifier:1;
    } _extenderFlags;
    NSMutableDictionary *_viewCreatorsByKey;
    NSMutableDictionary *_viewControllerCreatorsByKey;
    NSMutableDictionary *_controllerTransitionCreatorsByKey;
    TVMLViewFactory *_viewFactory;
    _TVLockupFactory *_lockupFactory;
    _TVControllerFactory *_controllerFactory;
    _TVTemplateFactory *_templateFactory;
    TVStyleSheetRegistry *_styleSheetRegistry;
    id <TVInterfaceCreating> _extendedInterfaceCreator;
}

@property (nonatomic, readonly) TVStyleSheetRegistry *styleSheetRegistry;
@property (retain, nonatomic) id <TVInterfaceCreating> extendedInterfaceCreator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedInterfaceFactory;
+ (id)_tvmlResourceMap;
+ (id)_URLForResource:(id)arg1 bundle:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)setup;
- (id)imageForResource:(id)arg1;
- (id)_viewFromElement:(id)arg1 existingView:(id)arg2;
- (void)_registerViewControllerCreator:(CDUnknownBlockType)arg1 withType:(unsigned long long)arg2;
- (void)_registerViewControllerCreatorEx:(CDUnknownBlockType)arg1 withType:(unsigned long long)arg2;
- (id)_viewControllerFromElement:(id)arg1 existingController:(id)arg2;
- (id)_styleSheetURLForTemplate:(id)arg1;
- (void)_darkerSystemColorStatusChanged:(id)arg1;
- (id)_controllerTransitionFromElement:(id)arg1 toElement:(id)arg2 forNavigationControllerOperation:(long long)arg3 relativeToFrom:(_Bool)arg4;
- (void)_willParseAppDocument:(id)arg1 forImplicitUpdates:(_Bool)arg2;
- (Class)_collectionViewCellClassForElement:(id)arg1;
- (id)_viewFromElement:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
- (id)_resourceImageNamed:(id)arg1;
- (id)_viewControllerFromElement:(id)arg1 layout:(id)arg2 existingController:(id)arg3;
- (id)viewForElement:(id)arg1 existingView:(id)arg2;
- (id)viewControllerForElement:(id)arg1 existingViewController:(id)arg2;
- (id)URLForResource:(id)arg1;
- (Class)collectionViewCellClassForElement:(id)arg1;
- (id)playerViewControllerForPlayer:(id)arg1;
- (id)_navigationControllerForTabIdentifier:(id)arg1;
- (id)_getImageFromURLorBundle:(id)arg1;
- (void)_registerViewCreatorEx:(CDUnknownBlockType)arg1 withType:(unsigned long long)arg2;
- (Class)_extendedCollectionViewCellClassForIKElement:(id)arg1;
- (id)_imageProxyFromElement:(id)arg1 withLayout:(id)arg2;
- (void)_registerViewCreator:(CDUnknownBlockType)arg1 withType:(unsigned long long)arg2;
- (void)_registerProductTemplateURL:(id)arg1 forTemplateName:(id)arg2 includeParentStyleSheets:(_Bool)arg3;
- (id)_imageProxyFromElement:(id)arg1;
- (id)_imageProxyForResourceURL:(id)arg1 scaleToSize:(struct CGSize)arg2;
- (void)_registerControllerTransitioningCreator:(CDUnknownBlockType)arg1 withType:(unsigned long long)arg2;

@end
