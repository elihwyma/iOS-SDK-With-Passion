/*
 Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

#import <Foundation/NSError.h>

__attribute__((visibility("hidden")))
@interface NFCError : NSError

+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)errorWithCode:(long long)arg1;

- (id)initWithCode:(long long)arg1 userInfo:(id)arg2;

@end
