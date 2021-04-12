//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSError;

@protocol PFStream <NSObject, NSLocking>
- (NSUInteger)preferredStreamBlockSize;
- (NSError *)getStreamError;
- (BOOL)advanceStream:(long long)arg1 distanceMoved:(long long )arg2;
- (BOOL)advanceStream;
- (BOOL)rewindStream:(long long)arg1;
- (BOOL)rewindStream;
- (long long)streamPosition;
- (long long)streamLength;
- (void)closeStream;
- (BOOL)openStream;
@end

