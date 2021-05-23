/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADBulletColor.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADBulletColorSpecification : OADBulletColor

{
    OADColor *mColor;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)color;
- (id)initWithBulletColor:(id)arg1;

@end
