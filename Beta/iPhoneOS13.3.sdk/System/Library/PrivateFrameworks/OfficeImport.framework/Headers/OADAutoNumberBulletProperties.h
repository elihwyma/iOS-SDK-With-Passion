/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADBulletProperties.h>

__attribute__((visibility("hidden")))
@interface OADAutoNumberBulletProperties : OADBulletProperties

{
    int mSchemeType;
    unsigned long long mStartIndex;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)startIndex;
- (int)autoNumberSchemeType;
- (id)initWithAutoNumberSchemeType:(int)arg1 startIndex:(unsigned long long)arg2;

@end
