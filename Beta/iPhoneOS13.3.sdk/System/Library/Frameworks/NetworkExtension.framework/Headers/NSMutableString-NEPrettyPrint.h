/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSMutableString.h>

@interface NSMutableString (NEPrettyPrint)

- (void)appendPrettyObject:(id)arg1 withName:(id)arg2 andIndent:(int)arg3 options:(unsigned long long)arg4;
- (void)appendPrettyInt:(long long)arg1 withName:(id)arg2 andIndent:(int)arg3 options:(unsigned long long)arg4;
- (void)appendPrettyBOOL:(_Bool)arg1 withName:(id)arg2 andIndent:(int)arg3 options:(unsigned long long)arg4;
- (void)appendToStringAtColumnWithContent:(int *)arg1 column:(unsigned char)arg2 content:(const char *)arg3 appendAsNewLine:(_Bool)arg4 addNewLine:(_Bool)arg5;

@end
