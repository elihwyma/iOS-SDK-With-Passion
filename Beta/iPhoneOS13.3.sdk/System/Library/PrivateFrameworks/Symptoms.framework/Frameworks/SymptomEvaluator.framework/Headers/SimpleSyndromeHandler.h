/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@protocol SyndromeHandlerProtocol;

__attribute__((visibility("hidden")))
@interface SimpleSyndromeHandler : NSObject

{
    double lastReportTime;
    id <SyndromeHandlerProtocol> _nextStage;
    double _lastReportTime;
    NSMutableArray *_resetSources;
    unsigned int _dampeningInterval;
    unsigned int _dampeningStart;
    unsigned int _dampeningIncrement;
    unsigned int _dampeningMax;
    NSString *_syndromeName;
    const char *_syndromeUTF8Name;
}

@property (nonatomic, readonly) NSString *syndromeName;
@property (nonatomic) const char *syndromeUTF8Name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)configureClass:(id)arg1;
+ (id)objectWithName:(id)arg1;
+ (void)setDefaultNextStage:(id)arg1;

- (_Bool)_setName:(id)arg1;
- (void)_reset:(id)arg1;
- (int)configureInstance:(id)arg1;
- (int)read:(id)arg1 returnedValues:(id)arg2;
- (void)didReceiveSyndrome:(id)arg1;

@end
