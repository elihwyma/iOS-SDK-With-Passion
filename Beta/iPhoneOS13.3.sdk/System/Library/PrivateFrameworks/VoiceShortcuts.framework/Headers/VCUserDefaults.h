/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSUserDefaults.h>

@interface VCUserDefaults : NSUserDefaults

+ (id)sharedUserDefaults;

- (id)codableObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (_Bool)setCodableObject:(id)arg1 forKey:(id)arg2 error:(id *)arg3;

@end
