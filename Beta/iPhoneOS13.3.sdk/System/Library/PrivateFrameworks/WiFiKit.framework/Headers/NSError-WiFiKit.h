/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSError.h>

@interface NSError (WiFiKit)

+ (id)associationErrorWithReason:(long long)arg1;
+ (id)associationErrorWithCode:(int)arg1 requiresPassword:(_Bool)arg2 signalStrength:(long long)arg3;
+ (id)associationErrorWithReason:(long long)arg1 userInfo:(id)arg2;
+ (id)associationErrorWithCode:(int)arg1;
+ (id)scanErrorWithReason:(long long)arg1;
+ (id)scanErrorWithCode:(long long)arg1;

@end
