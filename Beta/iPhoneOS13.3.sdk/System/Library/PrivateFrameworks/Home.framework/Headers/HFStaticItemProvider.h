/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class NSSet;

@interface HFStaticItemProvider : HFItemProvider

{
    _Bool _hasProvidedItems;
    NSSet *_staticItems;
}

@property (retain, nonatomic) NSSet *staticItems;
@property (nonatomic) _Bool hasProvidedItems;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)items;
- (id)initWithItems:(id)arg1;
- (id)reloadItems;
- (id)initWithHome:(id)arg1 items:(id)arg2;

@end
