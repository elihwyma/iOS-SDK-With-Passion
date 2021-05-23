/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet, NSString;

@interface NUPattern : NSObject

{
    _Bool _isFixedOrder;
}

@property (nonatomic, readonly) NSSet *tokens;
@property (nonatomic, readonly) _Bool isFixedOrder;
@property (nonatomic, readonly) NSArray *shortestMatch;
@property (nonatomic, readonly) _Bool isEmpty;
@property (nonatomic, readonly) NSString *stringRepresentation;

+ (id)patternWithString:(id)arg1 error:(out id *)arg2;
+ (_Bool)scanString:(id)arg1 intoPattern:(out id *)arg2 error:(out id *)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)match:(id)arg1;
- (_Bool)isDetermisitic;
- (id)optimizedPattern;
- (_Bool)match:(id)arg1 location:(unsigned long long *)arg2 count:(unsigned long long *)arg3;
- (_Bool)isEqualToPattern:(id)arg1;

@end
