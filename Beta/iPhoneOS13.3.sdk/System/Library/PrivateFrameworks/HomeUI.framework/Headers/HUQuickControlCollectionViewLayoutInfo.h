/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface HUQuickControlCollectionViewLayoutInfo : NSObject

{
    NSMutableArray *_layoutDetailsArray;
    struct CGSize _collectionViewContentSize;
    struct CGRect _availableContentFrame;
}

@property (nonatomic) struct CGRect availableContentFrame;
@property (nonatomic) struct CGSize collectionViewContentSize;
@property (retain, nonatomic) NSMutableArray *layoutDetailsArray;

@end
