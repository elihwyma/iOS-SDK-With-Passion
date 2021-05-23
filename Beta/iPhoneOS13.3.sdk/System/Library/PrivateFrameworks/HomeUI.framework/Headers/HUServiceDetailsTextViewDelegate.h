/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HUServiceDetailsItemManager, NSString, UIViewController;

@interface HUServiceDetailsTextViewDelegate : NSObject

{
    HUServiceDetailsItemManager *_itemManager;
    UIViewController *_viewController;
}

@property (weak, nonatomic) HUServiceDetailsItemManager *itemManager;
@property (weak, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)dismissTextViewController;
- (id)unifiedIdentifiersForSectionIdentifier:(id)arg1;
- (void)displayUnifiedPrivacyInformationWithIdentifiers:(id)arg1;
- (id)privacyIdentifierForSectionIdentifier:(id)arg1;
- (void)displayPrivacyInformationWithIdentifier:(id)arg1;

@end
