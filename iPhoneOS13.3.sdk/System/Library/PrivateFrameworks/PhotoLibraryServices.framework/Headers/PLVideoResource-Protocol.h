//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSURL;

@protocol PLVideoResource <NSObject>
- (NSURL *)fileURLIfLocal;
- (BOOL)matchesOrExceedsQualityLevel:(unsigned int)arg1;
- (BOOL)isOriginalVideoComplement;
- (BOOL)isMediumHighQuality;
- (BOOL)isPlayable;
- (BOOL)isRemotelyAvailable;
- (BOOL)isStreamable;
- (BOOL)isLocallyGeneratable;
- (BOOL)isLocallyAvailable;
@end

