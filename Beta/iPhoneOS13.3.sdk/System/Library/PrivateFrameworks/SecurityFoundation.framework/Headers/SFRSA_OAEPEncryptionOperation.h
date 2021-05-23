/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <SecurityFoundation/SFRSAEncryptionOperation.h>

@protocol SFMaskGenerationFunction;

@interface SFRSA_OAEPEncryptionOperation : SFRSAEncryptionOperation

{
    id _oaepEncryptionOperationInternal;
}

@property (copy, nonatomic) id <SFMaskGenerationFunction> maskGenerationFunction;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1 maskGenerationFunction:(id)arg2;

@end
