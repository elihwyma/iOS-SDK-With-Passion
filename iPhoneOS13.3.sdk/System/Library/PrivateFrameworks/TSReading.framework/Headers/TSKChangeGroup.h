//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableArray;

@interface TSKChangeGroup : NSObject <NSCopying>
{
    NSMutableArray *mChangesArray;
}

@property(readonly, nonatomic) NSMutableArray *changesArray; // @synthesize changesArray=mChangesArray;
- (void)registerChange:(int)arg1 details:(id)arg2 forChangeSource:(id)arg3;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)init;

@end

