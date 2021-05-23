/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString, OADBaseStyles, OADDrawableDefaults;

__attribute__((visibility("hidden")))
@interface OADTheme : NSObject

{
    NSString *mName;
    OADBaseStyles *mBaseStyles;
    OADDrawableDefaults *mDrawableDefaults;
}

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) OADBaseStyles *baseStyles;
@property (nonatomic, readonly) OADDrawableDefaults *drawableDefaults;

- (id)init;
- (id)description;
- (_Bool)isEmpty;
- (void)validateTheme;

@end
