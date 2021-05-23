/*
 Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import <Foundation/NSObject.h>

#import <GLKit/Swift-Protocol.h>

@interface GLKHashableBigInt : NSObject <Swift>

{
    struct GLKBigInt_s _bigInt;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBigInt:(struct GLKBigInt_s *)arg1;

@end
