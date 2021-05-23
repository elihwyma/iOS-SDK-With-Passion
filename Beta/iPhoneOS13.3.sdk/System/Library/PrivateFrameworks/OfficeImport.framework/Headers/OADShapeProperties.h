/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADGraphicProperties.h>

__attribute__((visibility("hidden")))
@interface OADShapeProperties : OADGraphicProperties

{
    _Bool mIsTextBox;
}

+ (id)defaultProperties;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isTextBox;
- (void)setIsTextBox:(_Bool)arg1;

@end
