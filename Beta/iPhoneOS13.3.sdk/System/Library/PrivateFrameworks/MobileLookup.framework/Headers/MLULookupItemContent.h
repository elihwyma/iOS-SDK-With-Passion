/*
 Image: /System/Library/PrivateFrameworks/MobileLookup.framework/MobileLookup
 */

#import <Foundation/NSObject.h>

@class CNContact, NSURL, UIViewController;

__attribute__((visibility("hidden")))
@interface MLULookupItemContent : NSObject

{
    _Bool _valid;
    UIViewController *_previewViewController;
    unsigned long long _commitType;
    UIViewController *_commitViewController;
    NSURL *_commitURL;
}

@property (nonatomic) unsigned long long commitType;
@property (retain, nonatomic) UIViewController *commitViewController;
@property (retain, nonatomic) NSURL *commitURL;
@property _Bool valid;
@property (retain, nonatomic) UIViewController *previewViewController;
@property (nonatomic, readonly) CNContact *contact;

+ (id)contentWithURL:(id)arg1 result:(struct __DDResult *)arg2 documentProperties:(id)arg3;
+ (id)contentWithAttachments:(id)arg1 currentAttachmentIndex:(unsigned long long)arg2;
+ (id)contentWithText:(id)arg1 range:(struct _NSRange)arg2;

- (id)children;
- (void)dismissViewController;
- (id)requiredEntitlements;
- (_Bool)wantsSeamlessCommit;
- (void)setupViewControllerInCommitMode;
- (_Bool)commitPreviewInController:(id)arg1;

@end
