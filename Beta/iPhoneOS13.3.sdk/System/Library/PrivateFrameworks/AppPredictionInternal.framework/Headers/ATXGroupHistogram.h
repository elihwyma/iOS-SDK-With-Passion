/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface ATXGroupHistogram : NSObject

{
    NSMutableDictionary *_histogram;
    _Bool _isTotalScoreValid;
    double _total;
    struct _opaque_pthread_mutex_t _lock;
}

- (id)init;
- (void)dealloc;
- (void)addScore:(double)arg1 group:(id)arg2;
- (double)getScoreForGroup:(id)arg1;
- (double)_getTotalScore;

@end
