/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADProperties.h>

#import <OfficeImport/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface OADFill : OADProperties <Swift>

{
    _Bool mDefinedByStyle;
    _Bool _definedByStyle;
}

@property _Bool definedByStyle;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (float)alpha;
- (void)setStyleColor:(id)arg1;
- (_Bool)usesPlaceholderColor;
- (_Bool)isOverridden;

@end
