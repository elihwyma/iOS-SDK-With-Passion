/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADProperties.h>

#import <OfficeImport/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface OADLineEnd : OADProperties <Swift>

{
    unsigned char mType;
    unsigned char mWidth;
    unsigned char mLength;
    unsigned int mIsTypeOverridden:1;
    unsigned int mIsWidthOverridden:1;
    unsigned int mIsLengthOverridden:1;
}

+ (id)defaultProperties;
+ (id)stringForLineEndType:(unsigned char)arg1;
+ (id)stringForLineEndWidth:(unsigned char)arg1;
+ (id)stringForLineEndLength:(unsigned char)arg1;

- (unsigned char)length;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned char)type;
- (void)setType:(unsigned char)arg1;
- (void)setLength:(unsigned char)arg1;
- (unsigned char)width;
- (void)setWidth:(unsigned char)arg1;
- (id)initWithDefaults;
- (_Bool)isWidthOverridden;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (void)removeUnnecessaryOverrides;
- (_Bool)isTypeOverridden;
- (_Bool)isLengthOverridden;
- (id)initWithType:(unsigned char)arg1 width:(unsigned char)arg2 length:(unsigned char)arg3;

@end
