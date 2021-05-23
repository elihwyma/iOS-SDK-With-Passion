/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface ReportDampener : NSObject

{
    NSDate *_suppressReportingUntil;
    unsigned long long _numSuppressedReports;
}

@property (retain, nonatomic) NSDate *suppressReportingUntil;
@property (nonatomic) unsigned long long numSuppressedReports;

@end
