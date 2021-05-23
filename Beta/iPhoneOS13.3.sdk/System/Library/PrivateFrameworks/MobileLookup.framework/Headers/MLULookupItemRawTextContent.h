/*
 Image: /System/Library/PrivateFrameworks/MobileLookup.framework/MobileLookup
 */

#import <MobileLookup/MLULookupItemContent.h>

__attribute__((visibility("hidden")))
@interface MLULookupItemRawTextContent : MLULookupItemContent

- (id)previewActions;
- (void)dismissViewController;
- (unsigned long long)commitType;
- (id)initWithText:(id)arg1 range:(struct _NSRange)arg2;
- (void)setupViewControllerInCommitMode;
- (id)parsecCollectionViewController;

@end
