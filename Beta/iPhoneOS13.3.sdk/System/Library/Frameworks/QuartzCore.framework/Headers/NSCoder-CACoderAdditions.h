/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSCoder.h>

@interface NSCoder (CACoderAdditions)

+ (id)CA_supportedClasses;

- (void)CA_encodeObject:(id)arg1 forKey:(id)arg2 conditional:(_Bool)arg3;
- (id)CA_decodeObjectForKey:(id)arg1;
- (_Bool)CA_decodeCGFloatArray:(double *)arg1 count:(unsigned long long)arg2 forKey:(id)arg3;
- (void)CA_encodeCGFloatArray:(const double *)arg1 count:(unsigned long long)arg2 forKey:(id)arg3;

@end
