/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class NSString, TVPDateRange, TVPTimeRange;

@interface TVPChapter : NSObject

{
    TVPTimeRange *_timeRange;
    NSString *_localizedName;
    NSString *_chapterDescription;
    TVPDateRange *_dateRange;
}

@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) NSString *chapterDescription;
@property (retain, nonatomic) TVPTimeRange *timeRange;
@property (retain, nonatomic) TVPDateRange *dateRange;

@end
