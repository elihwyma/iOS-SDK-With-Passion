//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol GEOToolProxy
- (BOOL)notifyNetworkDefaultsChanged;
- (void)invalidateTileCache;
- (NSUInteger)freePurgableSpace:(NSUInteger)arg1 forUrgency:(int)arg2;
- (NSUInteger)calculatePurgableSpaceForUrgency:(int)arg1;
- (id)getDefault:(NSString *)arg1 source:(long long )arg2;
- (void)lockDBs;
- (void)unlockDBs;
- (NSString *)ping;
@end

