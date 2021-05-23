/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface HUQuickControlCollectionViewGridLayoutRowInfo : NSObject

{
    unsigned long long _numberOfItems;
    NSArray *_itemLayouts;
    struct CGSize _contentSize;
    struct CGPoint _rowOrigin;
}

@property (nonatomic) unsigned long long numberOfItems;
@property (nonatomic) struct CGSize contentSize;
@property (nonatomic) struct CGPoint rowOrigin;
@property (copy, nonatomic) NSArray *itemLayouts;

@end
