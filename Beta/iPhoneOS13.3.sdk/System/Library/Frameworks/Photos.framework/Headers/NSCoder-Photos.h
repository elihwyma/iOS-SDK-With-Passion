/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSCoder.h>

@interface NSCoder (Photos)

- (id)_ph_sandboxExtensionTokenKeyForURLKey:(id)arg1;
- (void)ph_encodeSandboxedURL:(id)arg1 forKey:(id)arg2;
- (id)ph_decodeSandboxedURLForKey:(id)arg1 sandboxExtensionWrapper:(id *)arg2;

@end
