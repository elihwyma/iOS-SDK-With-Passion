/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSDate, NSError;

__attribute__((visibility("hidden")))
@interface CKOperationFlowControlInfo : NSObject

{
    NSError *_lastError;
    NSDate *_flowControlEndDate;
}

@property (retain, nonatomic) NSError *lastError;
@property (retain, nonatomic) NSDate *flowControlEndDate;

+ (id)flowControlInfoWithEndDate:(id)arg1 error:(id)arg2;

@end
