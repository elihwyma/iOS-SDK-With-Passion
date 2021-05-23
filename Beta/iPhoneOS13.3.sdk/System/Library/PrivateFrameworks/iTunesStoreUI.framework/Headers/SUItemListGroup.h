/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, SUItem;

@interface SUItemListGroup : NSObject

{
    NSMutableArray *_items;
    SUItem *_separatorItem;
}

@property (nonatomic, readonly) NSString *indexBarTitle;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) SUItem *separatorItem;

- (void)dealloc;
- (id)description;

@end
