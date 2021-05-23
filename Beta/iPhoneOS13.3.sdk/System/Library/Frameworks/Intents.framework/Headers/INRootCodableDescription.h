/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INCodableDescription.h>

@class NSArray;

@interface INRootCodableDescription : INCodableDescription

{
    NSArray *_referencedCodableDescriptions;
}

@property (retain, nonatomic, setter=_setReferencedCodableDescriptions:) NSArray *referencedCodableDescriptions;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
