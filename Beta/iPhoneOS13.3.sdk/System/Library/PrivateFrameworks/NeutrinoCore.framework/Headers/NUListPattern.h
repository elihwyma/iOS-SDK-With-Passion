/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUPattern.h>

@class NSArray;

@interface NUListPattern : NUPattern

{
    struct NSArray *_list;
}

@property (readonly) NSArray *list;

- (id)init;
- (id)stringRepresentation;
- (id)tokens;
- (id)initWithList:(id)arg1;
- (id)shortestMatch;
- (id)optimizedPattern;
- (_Bool)match:(id)arg1 location:(unsigned long long *)arg2 count:(unsigned long long *)arg3;
- (_Bool)isEqualToPattern:(id)arg1;
- (_Bool)isFixedOrder;
- (_Bool)isEqualToListPattern:(id)arg1;

@end
