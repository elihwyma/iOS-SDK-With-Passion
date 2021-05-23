/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSSet;

@protocol HFItemUpdating;

@interface HFItemModule : NSObject

{
    id <HFItemUpdating> _itemUpdater;
}

@property (nonatomic, readonly) NSSet *itemProviders;
@property (nonatomic, readonly) NSSet *allItems;
@property (weak, nonatomic, readonly) id <HFItemUpdating> itemUpdater;

- (id)init;
- (_Bool)containsItem:(id)arg1;
- (id)initWithItemUpdater:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (void)registerForExternalUpdates;
- (void)unregisterForExternalUpdates;

@end
