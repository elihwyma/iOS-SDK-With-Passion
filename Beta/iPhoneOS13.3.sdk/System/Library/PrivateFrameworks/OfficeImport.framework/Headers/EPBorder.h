/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDBorder.h>

__attribute__((visibility("hidden")))
@interface EPBorder : EDBorder

{
    unsigned long long mPrecedence;
}

+ (id)borderWithBorder:(id)arg1 precedence:(unsigned long long)arg2 resources:(id)arg3;

- (unsigned long long)precedence;
- (id)initWithBorder:(id)arg1 precedence:(unsigned long long)arg2 resources:(id)arg3;
- (_Bool)isEqualToBorder:(id)arg1;

@end
