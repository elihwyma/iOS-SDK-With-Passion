//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface CCUILayoutOptions : NSObject <NSCopying, NSMutableCopying>
{
    double _itemEdgeSize;
    double _itemSpacing;
}

@property(readonly, nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(readonly, nonatomic) double itemEdgeSize; // @synthesize itemEdgeSize=_itemEdgeSize;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)_initWithLayoutOptions:(id)arg1;
- (id)init;

@end
