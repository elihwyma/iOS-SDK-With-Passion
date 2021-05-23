/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface HKHeartbeatSequenceChartData : NSObject

{
    double _initialXAxisOffset;
    NSMutableArray *_sections;
}

@property (nonatomic, readonly) NSMutableArray *sections;
@property (nonatomic) double initialXAxisOffset;

- (id)init;
- (long long)sectionCount;
- (void)addSequencePoint:(id)arg1 section:(long long)arg2;
- (void)enumerateSequences:(CDUnknownBlockType)arg1;
- (void)_expandToSection:(long long)arg1;

@end
