/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface TVPInterstitialCollection : NSObject

{
    NSArray *_interstitials;
    NSArray *_interstitialsWithAdjacentsMerged;
    id _backingData;
}

@property (retain, nonatomic) NSArray *interstitials;
@property (retain, nonatomic) NSArray *interstitialsWithAdjacentsMerged;
@property (retain, nonatomic) id backingData;

- (id)initWithInterstitials:(id)arg1;
- (double)timeAdjustedByRemovingInterstitials:(double)arg1;
- (double)timeAdjustedByIncludingInterstitials:(double)arg1;
- (id)interstitialForTime:(double)arg1;
- (id)mergedInterstitialForTime:(double)arg1;

@end
