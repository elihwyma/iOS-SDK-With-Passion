/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class OADColorScheme, OADFontScheme, OADStyleMatrix;

__attribute__((visibility("hidden")))
@interface OADBaseStylesBase : NSObject

{
    OADColorScheme *mColorScheme;
    OADStyleMatrix *mStyleMatrix;
    OADFontScheme *mFontScheme;
}

@property (retain, nonatomic) OADColorScheme *colorScheme;
@property (retain, nonatomic) OADStyleMatrix *styleMatrix;
@property (retain, nonatomic) OADFontScheme *fontScheme;

- (id)description;

@end
