/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUPattern.h>

@class NSArray;

@interface NUChoicePattern : NUPattern

{
    struct NSArray *_choices;
}

@property (readonly) NSArray *choices;

- (id)init;
- (id)stringRepresentation;
- (id)tokens;
- (id)shortestMatch;
- (id)optimizedPattern;
- (_Bool)match:(id)arg1 location:(unsigned long long *)arg2 count:(unsigned long long *)arg3;
- (_Bool)isEqualToPattern:(id)arg1;
- (_Bool)isFixedOrder;
- (id)initWithChoices:(id)arg1;
- (_Bool)isEqualToChoicePattern:(id)arg1;

@end
