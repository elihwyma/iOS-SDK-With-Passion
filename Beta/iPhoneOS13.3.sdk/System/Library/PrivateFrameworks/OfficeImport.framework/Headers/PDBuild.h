/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class OADDrawable;

__attribute__((visibility("hidden")))
@interface PDBuild : NSObject

{
    _Bool mIsAnimateBackground;
    OADDrawable *mDrawable;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)drawable;
- (void)setDrawable:(id)arg1;
- (void)setIsAnimateBackground:(_Bool)arg1;
- (_Bool)isAnimateBackground;

@end
