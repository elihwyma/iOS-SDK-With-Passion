/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADProperties.h>

__attribute__((visibility("hidden")))
@interface ODDLayoutVariablePropertySet : OADProperties

{
    int mDirection;
    _Bool mHasDirection;
}

+ (id)defaultProperties;

- (id)description;
- (int)direction;
- (void)setDirection:(int)arg1;
- (_Bool)hasDirection;
- (id)initWithDefaults;

@end
