/*
 Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

#import <MessageProtection/FullKey.h>

__attribute__((visibility("hidden")))
@interface SigningKey : FullKey

- (id)description;
- (id)publicKey;
- (id)signData:(id)arg1 error:(id *)arg2;
- (id)signDataWithFormatter:(id)arg1 error:(id *)arg2;

@end
