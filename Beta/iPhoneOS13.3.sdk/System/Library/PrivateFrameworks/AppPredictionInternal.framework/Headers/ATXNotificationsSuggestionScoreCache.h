/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface ATXNotificationsSuggestionScoreCache : NSObject

{
    NSDate *_date;
    double _score;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) double score;

- (id)initWithScore:(double)arg1;

@end
