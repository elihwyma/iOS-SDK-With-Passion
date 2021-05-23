/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNVersionParser : NSObject

+ (_Bool)_isSeparatedString:(id)arg1 equalToString:(id)arg2 atIndex:(unsigned long long)arg3 usingSeparator:(id)arg4;
+ (_Bool)isMajorVersion:(id)arg1 equalToMajorVersion:(id)arg2;
+ (_Bool)isMinorVersion:(id)arg1 equalToMinorVersion:(id)arg2;

@end
