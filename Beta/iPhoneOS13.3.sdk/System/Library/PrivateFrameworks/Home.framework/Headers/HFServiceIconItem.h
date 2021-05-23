/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

@protocol HFIconDescriptor;

@interface HFServiceIconItem : HFItem

{
    id <HFIconDescriptor> _iconDescriptor;
}

@property (nonatomic, readonly) id <HFIconDescriptor> iconDescriptor;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithIconDescriptor:(id)arg1;

@end
