/*
 Image: /System/Library/PrivateFrameworks/NLPLearner.framework/NLPLearner
 */

#import <NSObject.h>

@class NSData, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface QuickTypeWeightUpdates : NSObject

{
    NSData *_weightUpdates;
    NSNumber *_l2Norm;
    NSNumber *_maxNorm;
    NSString *_privacyDiagnosticReport;
    NSString *_weightUpdatesDiagnosticReport;
}

@property (retain, nonatomic) NSData *weightUpdates;
@property (copy, nonatomic) NSNumber *l2Norm;
@property (copy, nonatomic) NSNumber *maxNorm;
@property (copy, nonatomic) NSString *privacyDiagnosticReport;
@property (copy, nonatomic) NSString *weightUpdatesDiagnosticReport;

@end
