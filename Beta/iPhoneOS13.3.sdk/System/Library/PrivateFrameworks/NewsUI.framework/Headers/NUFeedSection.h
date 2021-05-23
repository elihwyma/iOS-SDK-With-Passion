/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface NUFeedSection : NSObject

{
    NSMutableArray *_items;
}

@property (nonatomic, readonly) NSMutableArray *items;
@property (nonatomic, readonly) unsigned long long numberOfItems;

- (id)init;
- (id)itemAtIndex:(unsigned long long)arg1;

@end
