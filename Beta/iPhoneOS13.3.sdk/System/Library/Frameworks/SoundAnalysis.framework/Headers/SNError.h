/*
 Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNError : NSObject

+ (void)populateClientError:(id *)arg1 withCode:(long long)arg2 underlyingError:(id)arg3 message:(id)arg4;
+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 message:(id)arg3;

@end
