/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@interface VUIMLFactory : NSObject

+ (id)sharedInstance;
+ (id)_urlForStyleSheetName:(id)arg1;
+ (void)_registerElements;
+ (void)_registerStyles;
+ (void)_registerStylesheets;
+ (void)_registerIOStyleSheets;

- (id)init;
- (id)imageForResource:(id)arg1;
- (id)_styleSheetURLForTemplate:(id)arg1;
- (id)viewForElement:(id)arg1 existingView:(id)arg2;
- (id)viewControllerForElement:(id)arg1 existingViewController:(id)arg2;
- (id)URLForResource:(id)arg1;
- (Class)collectionViewCellClassForElement:(id)arg1;
- (void)parseAppConfigurationForElement:(id)arg1;
- (id)imageProxyForElement:(id)arg1 withLayout:(id)arg2;
- (id)styleSheetURLForTemplate:(id)arg1;
- (id)_URLForResource:(id)arg1 inBundle:(id)arg2;
- (id)navigationControllerForTabIdentifier:(id)arg1;

@end
