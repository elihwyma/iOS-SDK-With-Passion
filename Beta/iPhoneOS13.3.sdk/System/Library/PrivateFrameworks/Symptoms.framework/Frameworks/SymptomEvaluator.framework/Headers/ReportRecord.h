/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ReportRecord : NSObject

{
    long long _count;
    double _lastSeen;
    NSString *_keyString;
}

@property (nonatomic) long long count;
@property (nonatomic) double lastSeen;
@property (retain, nonatomic) NSString *keyString;

@end
