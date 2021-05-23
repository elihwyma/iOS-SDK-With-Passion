/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSMutableString.h>

@interface NSMutableString (NEPrettyPrint)

- (void)appendPrettyObject:(id)arg1 withName:(id)arg2 indent:(int)arg3 showFullContent:(_Bool)arg4;
- (void)appendPrettyBOOL:(_Bool)arg1 withName:(id)arg2 indent:(int)arg3;
- (void)appendPrettyInt:(int)arg1 withName:(id)arg2 indent:(int)arg3;

@end
