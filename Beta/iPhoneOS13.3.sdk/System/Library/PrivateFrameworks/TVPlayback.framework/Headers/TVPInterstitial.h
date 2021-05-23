/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class TVPTimeRange;

@interface TVPInterstitial : NSObject

{
    TVPTimeRange *_timeRange;
}

@property (retain, nonatomic) TVPTimeRange *timeRange;

- (id)description;

@end
