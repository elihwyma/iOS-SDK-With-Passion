/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADColor.h>

__attribute__((visibility("hidden")))
@interface OADIndexedColor : OADColor

{
    unsigned long long mIndex;
}

+ (id)indexedColorWithIndex:(unsigned long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)index;
- (id)initWithIndex:(unsigned long long)arg1;
- (id)colorFromPalette:(id)arg1;

@end
