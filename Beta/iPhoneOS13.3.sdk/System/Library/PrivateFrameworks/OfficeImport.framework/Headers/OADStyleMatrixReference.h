/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADStyleMatrixReference : NSObject <Swift>

{
    unsigned long long mMatrixIndex;
    OADColor *mColor;
}

+ (id)styleMatrixReferenceWithMatrixIndex:(unsigned long long)arg1 color:(id)arg2;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (void)setMatrixIndex:(unsigned long long)arg1;
- (unsigned long long)matrixIndex;
- (id)initWithMatrixIndex:(unsigned long long)arg1 color:(id)arg2;

@end
