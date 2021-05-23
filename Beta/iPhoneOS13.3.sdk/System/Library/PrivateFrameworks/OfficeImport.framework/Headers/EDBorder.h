/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EDColorReference, EDResources;

__attribute__((visibility("hidden")))
@interface EDBorder : NSObject

{
    EDResources *mResources;
    int mType;
    EDColorReference *mColorReference;
    int mDiagonalType;
}

+ (id)borderWithType:(int)arg1 colorReference:(id)arg2 resources:(id)arg3;
+ (id)borderWithType:(int)arg1 colorReference:(id)arg2 diagonalType:(int)arg3 resources:(id)arg4;
+ (id)borderWithType:(int)arg1 color:(id)arg2 resources:(id)arg3;
+ (id)borderWithType:(int)arg1 color:(id)arg2 diagonalType:(int)arg3 resources:(id)arg4;
+ (id)borderWithType:(int)arg1 resources:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (int)type;
- (void)setType:(int)arg1;
- (id)color;
- (id)initWithResources:(id)arg1;
- (void)setDiagonalType:(int)arg1;
- (id)colorReference;
- (int)diagonalType;
- (_Bool)isEqualToBorder:(id)arg1;

@end
