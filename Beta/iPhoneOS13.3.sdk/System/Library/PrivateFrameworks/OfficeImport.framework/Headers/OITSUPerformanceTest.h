/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OITSUPerformanceTest : NSObject

{
    NSString *mName;
    SEL mSelector;
    id mTarget;
    double mGoalTime;
    double mPrecision;
    _Bool mQuiet;
    struct TSUOpstat_s mTiming;
    _Bool mPassed;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic) struct TSUOpstat_s timing;
@property (nonatomic) double goalTime;
@property (nonatomic) double precision;
@property (nonatomic) _Bool quiet;
@property (nonatomic, readonly) _Bool passed;

+ (id)csvHeader;

- (void)dealloc;
- (void)run;
- (void)report;
- (id)initWithName:(id)arg1 selector:(SEL)arg2 target:(id)arg3 goalTime:(double)arg4;
- (id)csvString;

@end
