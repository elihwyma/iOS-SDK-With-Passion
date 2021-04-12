//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface PGGraphUpdateJetsamIndicator : NSObject
{
    BOOL _indicatorExists;
    NSURL *_indicatorURL;
    long long _retryCount;
    long long _maxRetryCount;
}

@property(nonatomic) long long maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
@property(nonatomic) BOOL indicatorExists; // @synthesize indicatorExists=_indicatorExists;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, nonatomic) NSURL *indicatorURL; // @synthesize indicatorURL=_indicatorURL;
// - (void).cxx_destruct;
- (void)_removeIndicator;
- (void)_readIndicator;
- (void)clear;
- (void)markUpdate;
@property(readonly, nonatomic) BOOL updateDidCauseJetsam;
- (id)description;
- (id)initWithIndicatorDirectoryURL:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;

@end

