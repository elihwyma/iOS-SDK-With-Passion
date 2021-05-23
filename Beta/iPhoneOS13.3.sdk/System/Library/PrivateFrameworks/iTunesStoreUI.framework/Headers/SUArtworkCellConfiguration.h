/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUArrayCellConfiguration.h>

@class NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface SUArtworkCellConfiguration : SUArrayCellConfiguration

{
    NSMutableDictionary *_artworkByURL;
    NSMutableArray *_artworkLoadOperations;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSessionDuration;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentage;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;

+ (id)copyDefaultContext;

- (void)dealloc;
- (void)setRepresentedObject:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)cancelArtworkRequests;
- (id)copyImageDataProvider;
- (id)_artworkImageForURL:(id)arg1 dataProvider:(id)arg2;
- (void)reloadAfterArtworkLoad;
- (id)artworkImageForItemImage:(id)arg1;
- (id)artworkImageForURL:(id)arg1;

@end
