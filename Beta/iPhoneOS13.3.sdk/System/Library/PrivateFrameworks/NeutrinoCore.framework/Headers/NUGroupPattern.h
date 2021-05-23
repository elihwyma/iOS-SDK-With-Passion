/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUPattern.h>

@class NSArray;

@interface NUGroupPattern : NUPattern

{
    struct NSArray *_group;
}

@property (readonly) NSArray *group;

- (id)init;
- (id)stringRepresentation;
- (id)initWithGroup:(id)arg1;
- (id)tokens;
- (id)shortestMatch;
- (id)optimizedPattern;
- (_Bool)match:(id)arg1 location:(unsigned long long *)arg2 count:(unsigned long long *)arg3;
- (_Bool)isEqualToPattern:(id)arg1;
- (_Bool)isFixedOrder;
- (_Bool)isEqualToGroupPattern:(id)arg1;

@end
