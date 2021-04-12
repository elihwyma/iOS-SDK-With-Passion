//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDBatchedQueryServer.h>

@class NSArray;

@interface HDSampleQueryServer : HDBatchedQueryServer
{
    BOOL _suspended;
    BOOL _includeAutomaticTimeZones;
    NSUInteger _limit;
    NSArray *_sortDescriptors;
}

+ (BOOL)supportsAnchorBasedAuthorization;
+ (id)requiredEntitlements;
+ (Class)queryClass;
@property(readonly, nonatomic) BOOL includeAutomaticTimeZones; // @synthesize includeAutomaticTimeZones=_includeAutomaticTimeZones;
@property(readonly, copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(readonly, nonatomic) NSUInteger limit; // @synthesize limit=_limit;
// - (void).cxx_destruct;
- (void)_queue_start;
- (BOOL)validateConfiguration:(id )arg1;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end

