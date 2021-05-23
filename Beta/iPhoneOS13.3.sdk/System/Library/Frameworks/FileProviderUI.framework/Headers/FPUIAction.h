/*
 Image: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
 */

#import <UIKit/UIDocumentBrowserActionDescriptor.h>

@interface FPUIAction : UIDocumentBrowserActionDescriptor

{
    _Bool _isNonUIAction;
}

@property (nonatomic, readonly) _Bool isNonUIAction;

- (id)initWithIdentifier:(id)arg1 uiActionProviderIdentifier:(id)arg2 fileProviderIdentifier:(id)arg3 displayName:(id)arg4 predicate:(id)arg5 displayInline:(_Bool)arg6 isNonUIAction:(_Bool)arg7;

@end
