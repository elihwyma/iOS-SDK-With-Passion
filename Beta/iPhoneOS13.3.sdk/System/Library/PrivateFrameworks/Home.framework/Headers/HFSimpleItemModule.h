/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemModule.h>

@class NSSet;

@interface HFSimpleItemModule : HFItemModule

{
    NSSet *_itemProviders;
    CDUnknownBlockType _sectionBuilder;
}

@property (copy, nonatomic) CDUnknownBlockType sectionBuilder;
@property (retain, nonatomic) NSSet *itemProviders;

- (id)initWithItemUpdater:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 itemProviders:(id)arg2 sectionBuilder:(CDUnknownBlockType)arg3;

@end
