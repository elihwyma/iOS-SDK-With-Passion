//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray;
@protocol NSFastEnumeration, PGHighlightItem;

@protocol PGHighlightItemModelReader <NSObject>
- (unsigned short)visibilityStateForHighlightItem:(id <PGHighlightItem>)arg1;
- (NSArray *)fetchParentHighlightItemsForHighlightItems:(id <NSFastEnumeration>)arg1;
- (NSArray *)fetchChildHighlightItemsForHighlightItem:(id <PGHighlightItem>)arg1;
@end

