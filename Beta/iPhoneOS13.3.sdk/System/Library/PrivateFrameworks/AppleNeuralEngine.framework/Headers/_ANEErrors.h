/*
 Image: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
 */

#import <Foundation/NSObject.h>

@interface _ANEErrors : NSObject

+ (id)programInferenceOverflowErrorForMethod:(id)arg1;
+ (id)programInferenceOtherErrorForMethod:(id)arg1;
+ (id)entitlementErrorForMethod:(id)arg1;
+ (id)priorityErrorForMethod:(id)arg1;
+ (id)timeoutErrorForMethod:(id)arg1;
+ (id)createErrorWithCode:(long long)arg1 description:(id)arg2;
+ (id)programCreationErrorForMethod:(id)arg1;
+ (id)programLoadErrorForMethod:(id)arg1;
+ (id)missingCodeSigningErrorForMethod:(id)arg1;

@end
