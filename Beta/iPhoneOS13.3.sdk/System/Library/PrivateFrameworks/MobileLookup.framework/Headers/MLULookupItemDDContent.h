/*
 Image: /System/Library/PrivateFrameworks/MobileLookup.framework/MobileLookup
 */

#import <MobileLookup/MLULookupItemContent.h>

@class DDPreviewAction;

__attribute__((visibility("hidden")))
@interface MLULookupItemDDContent : MLULookupItemContent

{
    DDPreviewAction *_previewAction;
}

- (id)contact;
- (void)dismissViewController;
- (unsigned long long)commitType;
- (id)commitURL;
- (id)initWithURL:(id)arg1 result:(struct __DDResult *)arg2 documentProperties:(id)arg3;
- (void)setupViewControllerInCommitMode;

@end
