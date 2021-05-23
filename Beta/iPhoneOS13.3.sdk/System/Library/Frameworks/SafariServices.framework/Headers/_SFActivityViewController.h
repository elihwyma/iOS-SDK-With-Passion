/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIActivityViewController.h>

@class NSArray, NSMutableSet, NSString, NSURL, _SFActivityItemCustomizationController, _SFActivityItemProviderCollection, _SFPrintController, _SFSafariSharingExtensionController;

@protocol _SFActivityViewControllerDelegate;

@interface _SFActivityViewController : UIActivityViewController

{
    _SFPrintController *_printController;
    _SFActivityItemProviderCollection *_itemProviderCollection;
    NSArray *_initialApplicationActivities;
    NSMutableSet *_activityTypesExcludedDueToSelectedCustomization;
    _SFSafariSharingExtensionController *_sharingExtensionController;
    id <_SFActivityViewControllerDelegate> _delegate;
    _SFActivityItemCustomizationController *_customizationController;
    NSURL *_sharingURL;
    NSArray *_activityItemProviders;
    NSString *_currentExtensionIdentifier;
}

@property (copy, nonatomic) NSString *currentExtensionIdentifier;
@property (weak, nonatomic) _SFSafariSharingExtensionController *sharingExtensionController;
@property (weak, nonatomic) id <_SFActivityViewControllerDelegate> delegate;
@property (retain, nonatomic) _SFActivityItemCustomizationController *customizationController;
@property (retain, nonatomic) NSURL *sharingURL;
@property (nonatomic, readonly) NSArray *activityItemProviders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)activeWebPageExtensionItemForURL:(id)arg1 withPreviewImageHandler:(CDUnknownBlockType)arg2;

- (void)dealloc;
- (void)_performActivity:(id)arg1;
- (void)_prepareActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_executeActivity;
- (void)_updateActivityItems:(id)arg1;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 sharingURL:(id)arg3 sourceURL:(id)arg4;
- (void)_updatePrintControllerWithActivityItems:(id)arg1;
- (void)activityDidComplete:(id)arg1 withReturnedItems:(id)arg2 success:(_Bool)arg3;
- (void)_processJavaScriptFinalizeReturnedItems:(id)arg1 forExtension:(id)arg2;
- (_Bool)_containsProviderForDownloadActivityAndGetMIMEType:(id *)arg1 uti:(id *)arg2;
- (void)prepareJavaScriptExtensionItemForActivity:(id)arg1;
- (void)_preparePrint:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_extensionItemForExtensionActivity:(id)arg1;
- (id)_javaScriptProcessingFileURLInExtension:(id)arg1;
- (void)customizationControllerCustomizationsDidChange:(id)arg1;
- (id)initWithActivityItemProviderCollection:(id)arg1 applicationActivities:(id)arg2 sharingURL:(id)arg3 sourceURL:(id)arg4;

@end
