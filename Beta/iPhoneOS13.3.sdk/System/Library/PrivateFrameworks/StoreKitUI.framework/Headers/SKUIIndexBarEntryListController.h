/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString, SKUIViewElement;

@protocol SKUIIndexBarEntryListControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIIndexBarEntryListController : NSObject

{
    _Bool _needsRootTargetViewElement;
    _Bool _hidesIndexBar;
    id <SKUIIndexBarEntryListControllerDelegate> _delegate;
    NSString *_rootTargetIndexBarEntryID;
    SKUIViewElement *_rootTargetViewElement;
    long long _numberOfEntryDescriptors;
}

@property (weak, nonatomic) id <SKUIIndexBarEntryListControllerDelegate> delegate;
@property (nonatomic, readonly) _Bool needsRootTargetViewElement;
@property (nonatomic, readonly) _Bool hidesIndexBar;
@property (nonatomic, readonly) NSString *rootTargetIndexBarEntryID;
@property (retain, nonatomic) SKUIViewElement *rootTargetViewElement;
@property (nonatomic, readonly) long long numberOfEntryDescriptors;

+ (id)entryListControllerForEntryViewElement:(id)arg1;
+ (id)entryListControllerForEntryListViewElement:(id)arg1;

- (id)entryDescriptorAtIndex:(long long)arg1;
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long *)arg2;
- (void)reloadViewElementData;
- (void)_didInvalidate;

@end
