/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/_SFActivity.h>

@class NSString, UIViewController, _SFActivityItemCustomizationController, _SFSaveToFilesOperation;

__attribute__((visibility("hidden")))
@interface SFSaveToFilesActivity : _SFActivity

{
    _SFSaveToFilesOperation *_operation;
    UIViewController *_presenterViewController;
    CDUnknownBlockType _presentationCompletionHandler;
    _Bool _presentAnimated;
    _SFActivityItemCustomizationController *_customizationController;
    _Bool _supportsDownloads;
}

@property (nonatomic) _Bool supportsDownloads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)activityType;
- (id)activityViewController;
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithActivityItemProviderCollection:(id)arg1 customizationController:(id)arg2;
- (void)saveToFilesOperation:(id)arg1 presentViewController:(id)arg2;
- (void)saveToFilesOperation:(id)arg1 didFinishWithSuccess:(_Bool)arg2;
- (_Bool)saveToFilesOperationSupportsDownloads:(id)arg1;
- (id)customizationControllerForSaveToFilesOperation:(id)arg1;

@end
