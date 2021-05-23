/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADBlipEffect.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADForegroundColorEffect : OADBlipEffect

{
    OADColor *mForegroundColor;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setForegroundColor:(id)arg1;
- (id)foregroundColor;
- (void)setStyleColor:(id)arg1;

@end
