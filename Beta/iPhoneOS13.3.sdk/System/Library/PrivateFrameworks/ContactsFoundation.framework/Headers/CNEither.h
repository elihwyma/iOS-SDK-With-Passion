/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class CNPair;

@interface CNEither : NSObject

{
    CNPair *_pair;
}

@property (retain, nonatomic) CNPair *pair;
@property (nonatomic, readonly) _Bool isLeft;
@property (nonatomic, readonly) _Bool isRight;
@property (nonatomic, readonly) id left;
@property (nonatomic, readonly) id right;

+ (_Bool)supportsSecureCoding;
+ (id)eitherWithBlock:(CDUnknownBlockType)arg1;
+ (id)eitherWithRight:(id)arg1;
+ (id)eitherWithLeft:(id)arg1;
+ (id)eitherWithBool:(_Bool)arg1 error:(id)arg2;
+ (id)eitherWithLeft:(id)arg1 right:(id)arg2;
+ (id)firstLeftInLazyChain:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLeft:(id)arg1 right:(id)arg2;

@end
