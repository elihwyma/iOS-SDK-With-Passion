/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString, NSURL;

@interface TVPChapterCollection : NSObject

{
    _Bool _shouldStartPlaybackFromStartDate;
    _Bool _shouldDisplayChapterMarkers;
    _Bool _shouldShowDescriptionOnChapterSkip;
    NSString *_name;
    NSArray *_chapters;
    long long _type;
    id _backingData;
    NSDate *_startDate;
    double _refreshInterval;
    NSURL *_refreshURL;
}

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *chapters;
@property (nonatomic) long long type;
@property (retain, nonatomic) id backingData;
@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) _Bool shouldStartPlaybackFromStartDate;
@property (nonatomic) _Bool shouldDisplayChapterMarkers;
@property (nonatomic) _Bool shouldShowDescriptionOnChapterSkip;
@property (nonatomic) double refreshInterval;
@property (copy, nonatomic) NSURL *refreshURL;

- (id)init;
- (id)chapterForTime:(double)arg1;
- (id)nearestChapterForTime:(double)arg1;
- (id)chapterForDate:(id)arg1;
- (id)nearestChapterForDate:(id)arg1;

@end
