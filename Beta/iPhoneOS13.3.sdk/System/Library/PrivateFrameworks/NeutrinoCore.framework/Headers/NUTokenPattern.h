/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUPattern.h>

@class NSString;

@interface NUTokenPattern : NUPattern

{
    NSString *_token;
}

@property (readonly) NSString *token;

- (id)init;
- (id)stringRepresentation;
- (id)initWithToken:(id)arg1;
- (id)tokens;
- (id)shortestMatch;
- (id)optimizedPattern;
- (_Bool)match:(id)arg1 location:(unsigned long long *)arg2 count:(unsigned long long *)arg3;
- (_Bool)isEqualToPattern:(id)arg1;
- (_Bool)isFixedOrder;
- (_Bool)isEqualToTokenPattern:(id)arg1;

@end
