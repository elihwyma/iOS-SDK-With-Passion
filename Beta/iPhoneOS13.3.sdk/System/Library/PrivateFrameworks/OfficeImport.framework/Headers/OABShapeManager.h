/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OABShapeBaseManager.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OABShapeManager : OABShapeBaseManager

{
    struct EshShape *mShape;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithShape:(struct EshShape *)arg1;
- (_Bool)hidden;
- (_Bool)isFilled;
- (_Bool)isStroked;
- (id)initWithShape:(struct EshShape *)arg1 masterShape:(struct EshShape *)arg2;
- (_Bool)isTextPath;
- (_Bool)isShadowed;
- (_Bool)isFillOK;
- (_Bool)isStrokeOK;
- (_Bool)isShadowOK;
- (id)textPathUnicodeString;
- (int)textPathTextAlignment;
- (int)textPathFontSize;
- (id)textPathFontFamily;
- (_Bool)textPathBold;
- (_Bool)textPathItalic;
- (_Bool)textPathUnderline;
- (_Bool)textPathSmallcaps;
- (_Bool)textPathStrikethrough;

@end
