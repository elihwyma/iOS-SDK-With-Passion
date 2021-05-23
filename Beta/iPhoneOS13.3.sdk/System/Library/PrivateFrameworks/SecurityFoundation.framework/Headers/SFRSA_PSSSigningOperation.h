/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/SFRSASigningOperation.h>

@protocol SFMaskGenerationFunction;

@interface SFRSA_PSSSigningOperation : SFRSASigningOperation

{
    id _pssSigningOperationInternal;
}

@property (copy, nonatomic) id <SFMaskGenerationFunction> maskGenerationFunction;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1 digestOperation:(id)arg2;
- (id)initWithKeySpecifier:(id)arg1 digestOperation:(id)arg2 maskGenerationFunction:(id)arg3;

@end
