/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <Foundation/NSObject.h>

@interface ICAssert : NSObject

+ (void)handleFailedAssertWithCondition:(const char *)arg1 functionName:(const char *)arg2 simulateCrash:(_Bool)arg3 showAlert:(_Bool)arg4 format:(id)arg5;
+ (void)handleFailedAssertWithCondition:(const char *)arg1 functionName:(const char *)arg2 simulateCrash:(_Bool)arg3 showAlert:(_Bool)arg4 alertMessage:(id)arg5 format:(id)arg6;

@end
