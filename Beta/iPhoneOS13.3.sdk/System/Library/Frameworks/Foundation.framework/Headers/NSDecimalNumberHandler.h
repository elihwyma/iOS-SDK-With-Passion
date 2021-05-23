/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@interface NSDecimalNumberHandler : NSObject <Swift>

{
    unsigned int _scale:16;
    unsigned int _roundingMode:3;
    unsigned int _raiseOnExactness:1;
    unsigned int _raiseOnOverflow:1;
    unsigned int _raiseOnUnderflow:1;
    unsigned int _raiseOnDivideByZero:1;
    unsigned int _unused:9;
    void *_reserved2;
    void *_reserved;
}

+ (id)defaultDecimalNumberHandler;
+ (id)decimalNumberHandlerWithRoundingMode:(unsigned long long)arg1 scale:(short)arg2 raiseOnExactness:(_Bool)arg3 raiseOnOverflow:(_Bool)arg4 raiseOnUnderflow:(_Bool)arg5 raiseOnDivideByZero:(_Bool)arg6;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (short)scale;
- (unsigned long long)roundingMode;
- (id)initWithRoundingMode:(unsigned long long)arg1 scale:(short)arg2 raiseOnExactness:(_Bool)arg3 raiseOnOverflow:(_Bool)arg4 raiseOnUnderflow:(_Bool)arg5 raiseOnDivideByZero:(_Bool)arg6;
- (id)exceptionDuringOperation:(SEL)arg1 error:(unsigned long long)arg2 leftOperand:(id)arg3 rightOperand:(id)arg4;

@end
