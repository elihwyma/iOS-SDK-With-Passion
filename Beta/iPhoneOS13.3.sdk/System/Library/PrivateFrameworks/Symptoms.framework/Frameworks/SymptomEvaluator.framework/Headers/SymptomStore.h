/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface SymptomStore : NSObject

{
    unsigned int symptomIdent;
    NSString *symptomName;
    NSString *symptomKey;
    NSMutableArray *symptomHistory;
    unsigned int symptomMinRetainTime;
    unsigned int symptomMinSavedCount;
    double *symptomArrivalTimes;
    unsigned int symptomArrivalTimeNextIdx;
    NSString *_symptomDescription;
}

@property (nonatomic) unsigned int symptomIdent;
@property (retain, nonatomic) NSString *symptomKey;
@property (retain, nonatomic) NSString *symptomName;
@property (retain, nonatomic) NSString *symptomDescription;
@property (retain, nonatomic) NSMutableArray *symptomHistory;

+ (id)description;
+ (void)initialize;
+ (int)configure:(id)arg1;
+ (unsigned int)numSymptomsWithKey:(id)arg1 retainTime:(unsigned int)arg2;
+ (id)keyFromSymptomName:(id)arg1;
+ (void)resetSymptomsWithKey:(id)arg1;
+ (id)nameFromSymptomKey:(id)arg1;
+ (id)descriptionFromSymptomName:(id)arg1;
+ (id)idFromReporterName:(id)arg1;
+ (id)idFromSymptomName:(id)arg1;
+ (void)setRetainCount:(unsigned int)arg1 forSymptom:(id)arg2;
+ (void)setRetainTime:(unsigned int)arg1 forSymptom:(id)arg2;
+ (id)storedSymptomsWithKey:(id)arg1;
+ (id)storeFromSymptomName:(id)arg1;
+ (id)keyFromSymptomId:(unsigned int)arg1;
+ (void)_createForName:(id)arg1 key:(id)arg2 id:(unsigned int)arg3 symptomDescription:(id)arg4;
+ (int)addFromReporter:(id)arg1;
+ (id)storeFromSymptomKey:(id)arg1;
+ (void)noteReceivedSymptom:(id)arg1;
+ (id)nameFromSymptomId:(unsigned int)arg1;
+ (id)nameFromReporterId:(unsigned int)arg1;
+ (void)pruneSymptomsWithKey:(id)arg1;

- (id)description;
- (void)noteReceivedSymptom:(id)arg1;
- (void)setRetainTime:(unsigned int)arg1;
- (void)setRetainCount:(unsigned int)arg1;
- (unsigned int)numSymptomsWithRetainTime:(unsigned int)arg1;
- (void)_pruneSymptomsForDate:(id)arg1;

@end
