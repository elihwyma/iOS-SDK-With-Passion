//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class HMDHomeManager, NSString;

@interface HMDBackingStoreSaveToPersistentStore : NSOperation
{
    BOOL _incrementGeneration;
    HMDHomeManager *_homeManager;
    NSString *_reason;
}

@property(readonly, nonatomic) BOOL incrementGeneration; // @synthesize incrementGeneration=_incrementGeneration;
@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
// - (void).cxx_destruct;
- (void)main;
- (id)initWithHomeManager:(id)arg1 reason:(id)arg2 incrementGeneration:(BOOL)arg3;

@end

