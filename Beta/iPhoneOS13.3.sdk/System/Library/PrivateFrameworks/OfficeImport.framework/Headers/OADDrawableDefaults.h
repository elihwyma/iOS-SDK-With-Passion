/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class OADDrawableCategoryDefaults;

__attribute__((visibility("hidden")))
@interface OADDrawableDefaults : NSObject

{
    OADDrawableCategoryDefaults *mShapeDefaults;
    OADDrawableCategoryDefaults *mLineDefaults;
    OADDrawableCategoryDefaults *mTextDefaults;
}

@property (retain, nonatomic) OADDrawableCategoryDefaults *shapeDefaults;
@property (retain, nonatomic) OADDrawableCategoryDefaults *lineDefaults;
@property (retain, nonatomic) OADDrawableCategoryDefaults *textDefaults;

- (id)description;
- (_Bool)isEmpty;
- (id)addShapeDefaults;
- (id)addLineDefaults;
- (id)addTextDefaults;
- (void)addDefaults;

@end
