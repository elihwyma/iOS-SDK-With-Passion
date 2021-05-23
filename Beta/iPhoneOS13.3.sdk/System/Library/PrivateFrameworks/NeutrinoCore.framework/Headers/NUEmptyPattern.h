/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUPattern.h>

@interface NUEmptyPattern : NUPattern

- (_Bool)isEmpty;
- (id)stringRepresentation;
- (id)tokens;
- (id)shortestMatch;
- (id)optimizedPattern;
- (_Bool)match:(id)arg1 location:(unsigned long long *)arg2 count:(unsigned long long *)arg3;
- (_Bool)isEqualToPattern:(id)arg1;
- (_Bool)isFixedOrder;

@end
