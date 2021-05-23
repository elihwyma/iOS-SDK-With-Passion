/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface BBSectionIcon : NSObject

{
    NSSet *_variants;
}

@property (copy, nonatomic) NSSet *variants;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addVariant:(id)arg1;
- (id)_bestVariantForFormat:(long long)arg1;
- (id)_bestVariantForUIFormat:(int)arg1;

@end
