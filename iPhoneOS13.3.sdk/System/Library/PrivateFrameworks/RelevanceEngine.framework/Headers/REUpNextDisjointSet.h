//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMapTable;

@interface REUpNextDisjointSet : NSObject <NSCopying>
{
    NSMapTable *_nodes;
}

// - (void).cxx_destruct;
- (id)description;
- (BOOL)isItem:(id)arg1 connectedToItem:(id)arg2;
- (id)allItemsConnectedToItem:(id)arg1;
- (BOOL)containsItem:(id)arg1;
@property(readonly, nonatomic) NSUInteger count;
- (void)connectItem:(id)arg1 withItem:(id)arg2;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)init;

@end

