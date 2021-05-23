/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADColor.h>

__attribute__((visibility("hidden")))
@interface OADSchemeColor : OADColor

{
    int mIndex;
}

+ (id)schemeColorWithIndex:(int)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)schemeColorIndex;
- (id)initWithSchemeColorIndex:(int)arg1;

@end
