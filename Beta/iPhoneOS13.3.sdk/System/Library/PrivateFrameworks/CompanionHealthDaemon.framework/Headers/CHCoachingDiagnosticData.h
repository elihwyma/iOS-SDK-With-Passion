/*
 Image: /System/Library/PrivateFrameworks/CompanionHealthDaemon.framework/CompanionHealthDaemon
 */

#import <NSObject.h>

@class HKCategorySample, NSArray;

@interface CHCoachingDiagnosticData : NSObject

{
    NSArray *_items;
    HKCategorySample *_coachingEventSample;
}

@property (nonatomic, readonly) NSArray *items;
@property (retain, nonatomic) HKCategorySample *coachingEventSample;

- (id)init;
- (id)itemForInterval:(unsigned long long)arg1 future:(_Bool)arg2;

@end
