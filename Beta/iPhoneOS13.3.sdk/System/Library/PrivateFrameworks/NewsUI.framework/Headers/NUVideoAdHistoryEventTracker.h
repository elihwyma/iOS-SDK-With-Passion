/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

#import <NewsUI/Swift-Protocol.h>

@class NSString, NUAdBannerView;

@interface NUVideoAdHistoryEventTracker : NSObject <Swift>

{
    NUAdBannerView *_mostRecentBannerView;
}

@property (retain, nonatomic) NUAdBannerView *mostRecentBannerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)clearHistory;
- (void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)loadingFinishedForVideoAdWithMetadata:(id)arg1;

@end
