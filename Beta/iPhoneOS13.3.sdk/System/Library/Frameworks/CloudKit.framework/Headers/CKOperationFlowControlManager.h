/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSMutableDictionary;

@interface CKOperationFlowControlManager : NSObject

{
    NSMutableDictionary *_flowControlledOperationKeys;
}

@property (readonly) NSMutableDictionary *flowControlledOperationKeys;

- (id)init;
- (id)CKStatusReportArray;
- (void)unlimitAllOperations;
- (_Bool)isOperationLimited:(id)arg1 outLimitError:(id *)arg2;
- (double)secondsUntilUnlimited:(id)arg1;
- (void)limitOperation:(id)arg1 retryAfter:(id)arg2 error:(id)arg3;

@end
