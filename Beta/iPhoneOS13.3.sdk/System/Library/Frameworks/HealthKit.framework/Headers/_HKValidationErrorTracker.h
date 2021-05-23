/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSMutableString;

__attribute__((visibility("hidden")))
@interface _HKValidationErrorTracker : NSObject

{
    long long _errorCount;
    NSMutableString *_errorMessage;
}

@property (nonatomic) long long errorCount;
@property (retain, nonatomic) NSMutableString *errorMessage;

- (id)init;

@end
