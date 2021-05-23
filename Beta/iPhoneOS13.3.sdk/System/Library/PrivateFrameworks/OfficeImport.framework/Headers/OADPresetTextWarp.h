/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADTextWarp.h>

__attribute__((visibility("hidden")))
@interface OADPresetTextWarp : OADTextWarp

{
    unsigned char mPresetTextWarpType;
}

+ (id)stringWithPresetTextWarpType:(unsigned char)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setPresetTextWarpType:(unsigned char)arg1;
- (unsigned char)presetTextWarpType;

@end
