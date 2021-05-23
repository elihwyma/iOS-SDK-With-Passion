/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HFServiceItem, NSMutableArray;

__attribute__((visibility("hidden")))
@interface HUQuickControlGridServiceSection : NSObject

{
    HFServiceItem *_serviceItem;
    NSMutableArray *_gridControlItems;
    NSMutableArray *_supplementaryControlItems;
}

@property (retain, nonatomic) HFServiceItem *serviceItem;
@property (retain, nonatomic) NSMutableArray *gridControlItems;
@property (retain, nonatomic) NSMutableArray *supplementaryControlItems;

- (id)init;

@end
