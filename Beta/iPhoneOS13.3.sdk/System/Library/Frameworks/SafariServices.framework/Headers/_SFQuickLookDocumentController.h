/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIDocumentInteractionController, UIView, _SFQuickLookDocument, _SFQuickLookDocumentView;

@interface _SFQuickLookDocumentController : NSObject

{
    NSArray *_buttonActions;
    UIDocumentInteractionController *_documentInteractionController;
    _SFQuickLookDocumentView *_documentView;
    _SFQuickLookDocument *_quickLookDocument;
}

@property (nonatomic, readonly) UIView *documentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_updateActionButtons;
- (id)_supportedApplications;
- (id)_actionTitleForType:(long long)arg1 withActionCount:(unsigned long long)arg2;
- (long long)dataOwnerForQuickLookDocumentView:(id)arg1;
- (void)quickLookDocumentView:(id)arg1 didSelectActionAtIndex:(long long)arg2;
- (id)itemProviderForQuickLookDocumentView:(id)arg1;
- (void)updateWithQuickLookDocument:(id)arg1;
- (void)presentDocumentInteractionControllerFromSource:(id)arg1;

@end
