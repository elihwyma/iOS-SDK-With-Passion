/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGTitleGenerator.h>

@class NSDate;

@interface PGBestOfTimeMemoryTitleGenerator : PGTitleGenerator

{
    NSDate *_startDate;
    NSDate *_endDate;
    long long _year;
}

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) long long year;

- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)initWithYear:(long long)arg1;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)_bestOfPastTimeTitle;
- (id)_bestOfYearTitle;
- (id)_generateSubtitle;

@end
