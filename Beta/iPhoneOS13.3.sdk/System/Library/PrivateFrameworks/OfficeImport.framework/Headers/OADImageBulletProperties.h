/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADBulletProperties.h>

@class OADBlipRef;

__attribute__((visibility("hidden")))
@interface OADImageBulletProperties : OADBulletProperties

{
    OADBlipRef *mImage;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)image;
- (id)initWithBlipRef:(id)arg1;

@end
