/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <TVPlayback/TVPChapter.h>

@class NSString, TVPDateRange, TVPTimeRange;

@interface TVPMutableChapter : TVPChapter

@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) NSString *chapterDescription;
@property (retain, nonatomic) TVPTimeRange *timeRange;
@property (retain, nonatomic) TVPDateRange *dateRange;

@end
