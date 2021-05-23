/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

@class NSSet;

@interface HFItemGroupItem : HFItem

{
    NSSet *_items;
}

@property (nonatomic, readonly) NSSet *items;

- (id)init;
- (void)setItems:(id)arg1;
- (id)initWithItems:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;

@end
