/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INObject.h>

@class INCodable, INCodableDescription;

@interface INCustomObject : INObject

{
    INCodable *_backingStore;
}

@property (retain, nonatomic, setter=_setBackingStore:) INCodable *_backingStore;
@property (nonatomic, readonly) INCodableDescription *codableDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)_initWithCodableDescription:(id)arg1;
- (id)initWithObject:(id)arg1 codableDescription:(id)arg2;
- (_Bool)_isValidKey:(id)arg1;

@end
