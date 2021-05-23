/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADBackground.h>

@class NSArray, OADFill;

__attribute__((visibility("hidden")))
@interface OADBackgroundProperties : OADBackground

{
    OADFill *mFill;
    NSArray *mEffects;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)fill;
- (void)setFill:(id)arg1;
- (id)effects;
- (void)setEffects:(id)arg1;

@end
