/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class EDResources;

__attribute__((visibility("hidden")))
@interface EDColorReference : NSObject <Swift>

{
    EDResources *mResources;
    int mSystemColorID;
    unsigned long long mColorIndex;
    unsigned long long mThemeIndex;
    double mTint;
}

+ (id)colorReferenceWithColorIndex:(unsigned long long)arg1 resources:(id)arg2;
+ (id)colorReferenceWithResources:(id)arg1;
+ (id)colorReferenceWithColor:(id)arg1 resources:(id)arg2;
+ (id)colorReferenceWithThemeIndex:(unsigned long long)arg1 tint:(double)arg2 resources:(id)arg3;
+ (id)colorReferenceWithSystemColorID:(int)arg1 resources:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;
- (id)color;
- (double)tint;
- (unsigned long long)themeIndex;
- (id)initWithResources:(id)arg1;
- (int)systemColorID;
- (_Bool)isEqualToColorReference:(id)arg1;
- (unsigned long long)colorIndex;
- (id)initWithColor:(id)arg1 resources:(id)arg2;

@end
