/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@protocol PXBrowserSelectionSnapshot;

@interface _PXBrowserSummarySelectedItemsSnapshot : NSObject

{
    id <PXBrowserSelectionSnapshot> _browserSelectionSnapshot;
}

@property (nonatomic, readonly) id <PXBrowserSelectionSnapshot> browserSelectionSnapshot;
@property (nonatomic, readonly) long long count;

- (id)init;
- (id)initWithBrowserSelectionSnapshot:(id)arg1;
- (id)itemReferenceAtIndex:(long long)arg1;
- (id)containsItemReference:(id)arg1;
- (id)itemForItemReference:(id)arg1;

@end
