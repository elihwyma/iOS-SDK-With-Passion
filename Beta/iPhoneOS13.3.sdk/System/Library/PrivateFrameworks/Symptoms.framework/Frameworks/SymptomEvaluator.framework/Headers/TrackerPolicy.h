/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class FlowClassification;

__attribute__((visibility("hidden")))
@interface TrackerPolicy : NSObject

{
    struct {
        unsigned int trafficClass;
        FlowClassification *flowClassification;
    } _classMap[12];
    struct {
        unsigned int mgmtFlags;
        FlowClassification *flowClassification;
    } _mgmtFlagsMap[4];
    unsigned int _numClassMaps;
    unsigned int _numMgmtFlagsMaps;
    FlowClassification *_defaultClassification;
    unsigned long long _maximumConnectionsPerHour;
}

@property unsigned int numClassMaps;
@property unsigned int numMgmtFlagsMaps;
@property (retain) FlowClassification *defaultClassification;
@property unsigned long long maximumConnectionsPerHour;

+ (void)initialize;
+ (id)preferredInstance:(id)arg1;

- (id)init;
- (id)description;
- (int)configureInstance:(id)arg1;
- (id)nonDefaultFlowClassificationFor:(id)arg1;
- (void)addClassification:(id)arg1 forTrafficClass:(unsigned int)arg2;
- (void)addClassification:(id)arg1 forTrafficMgmtFlags:(unsigned int)arg2;
- (id)flowClassificationFor:(id)arg1;

@end
