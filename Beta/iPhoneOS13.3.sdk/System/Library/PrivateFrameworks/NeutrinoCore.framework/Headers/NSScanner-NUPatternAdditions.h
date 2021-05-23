/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSScanner.h>

@interface NSScanner (NUPatternAdditions)

- (id)substringFromScanLocation;
- (_Bool)scanPattern:(out id *)arg1 error:(out id *)arg2;
- (_Bool)scanListPattern:(out id *)arg1 error:(out id *)arg2;
- (_Bool)scanGroupPattern:(out id *)arg1 error:(out id *)arg2;
- (_Bool)scanChoicePattern:(out id *)arg1 error:(out id *)arg2;
- (_Bool)scanTokenPattern:(out id *)arg1 error:(out id *)arg2;
- (_Bool)scanRepeatPattern:(inout id *)arg1 error:(out id *)arg2;
- (_Bool)scanPatterns:(out id *)arg1 from:(id)arg2 to:(id)arg3 delimiter:(id)arg4 error:(out id *)arg5;

@end
