/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <TVPlayback/TVPChapterCollection.h>

@class NSArray, NSDate, NSString, NSURL;

@interface TVPMutableChapterCollection : TVPChapterCollection

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

@end
