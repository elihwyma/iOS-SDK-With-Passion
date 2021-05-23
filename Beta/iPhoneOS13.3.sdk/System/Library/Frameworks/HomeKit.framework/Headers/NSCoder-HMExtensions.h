/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSCoder.h>

@interface NSCoder (HMExtensions)

- (id)decodeArrayOfConditionalObjects:(Class)arg1 forKey:(id)arg2;
- (void)encodeArrayOfConditionalObjects:(id)arg1 forKey:(id)arg2;
- (void)encodeSetOfConditionalObjects:(id)arg1 forKey:(id)arg2;
- (id)decodeSetOfConditionalObjects:(Class)arg1 forKey:(id)arg2;

@end
