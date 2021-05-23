/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableArray, NSString;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface ReporterFilter : NSObject

{
    NSObject<OS_dispatch_source> *_finalTimer;
    _Bool _timingInProgress;
    struct sym_filter *_transportFilters;
    _Bool _symptomFilterChanged;
    unsigned int _reporterId;
    NSString *_reporterName;
    NSMutableArray *_symptomFilters;
    NSData *_filterMessage;
}

@property (nonatomic, readonly) unsigned int reporterId;
@property (nonatomic, readonly) NSString *reporterName;
@property (nonatomic, readonly) NSMutableArray *symptomFilters;
@property (nonatomic) _Bool symptomFilterChanged;
@property (nonatomic, readonly) NSData *filterMessage;

+ (void)initialize;
+ (id)filterForName:(id)arg1 id:(id)arg2;
+ (void)enumerateReporterFiltersUsingBlock:(CDUnknownBlockType)arg1;
+ (id)filterForId:(unsigned int)arg1;

- (id)init;
- (id)description;
- (int)configureSymptomFilter:(id)arg1;
- (_Bool)hasFinalTimer;
- (void)setFinalTimer:(long long)arg1;
- (void)updateTransportFilters;
- (void)pushTransportFilters;
- (void)pushFinalFilters;
- (void)setSymptomFilter:(id)arg1;

@end
