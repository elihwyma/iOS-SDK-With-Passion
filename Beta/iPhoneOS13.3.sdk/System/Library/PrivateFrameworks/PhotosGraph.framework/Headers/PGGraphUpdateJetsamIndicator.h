/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface PGGraphUpdateJetsamIndicator : NSObject

{
    _Bool _indicatorExists;
    NSURL *_indicatorURL;
    long long _retryCount;
    long long _maxRetryCount;
}

@property (nonatomic, readonly) NSURL *indicatorURL;
@property (nonatomic) long long retryCount;
@property (nonatomic) _Bool indicatorExists;
@property (nonatomic) long long maxRetryCount;
@property (nonatomic, readonly) _Bool updateDidCauseJetsam;

- (id)description;
- (void)clear;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)initWithIndicatorDirectoryURL:(id)arg1;
- (void)markUpdate;
- (void)_readIndicator;
- (void)_removeIndicator;

@end
