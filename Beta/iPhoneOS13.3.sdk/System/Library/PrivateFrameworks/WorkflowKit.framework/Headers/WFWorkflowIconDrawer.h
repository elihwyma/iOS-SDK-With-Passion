/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSData, WFColor;

@interface WFWorkflowIconDrawer : NSObject

{
    _Bool _drawBackground;
    _Bool _useCustomImage;
    _Bool _rounded;
    unsigned short _glyphCharacter;
    WFColor *_backgroundColor;
    NSData *_customImageData;
    WFColor *_glyphColor;
    double _cornerRadius;
    struct CGSize _glyphSize;
}

@property (nonatomic) unsigned short glyphCharacter;
@property (retain, nonatomic) WFColor *backgroundColor;
@property (copy, nonatomic) NSData *customImageData;
@property (retain, nonatomic) WFColor *glyphColor;
@property (nonatomic) struct CGSize glyphSize;
@property (nonatomic) _Bool drawBackground;
@property (nonatomic) _Bool useCustomImage;
@property (nonatomic) _Bool rounded;
@property (nonatomic) double cornerRadius;

+ (id)imageWithIcon:(id)arg1 size:(struct CGSize)arg2;
+ (id)glyphImageWithIcon:(id)arg1 size:(struct CGSize)arg2;
+ (id)pngDataForImageWithIcon:(id)arg1 size:(struct CGSize)arg2;

- (id)init;
- (void)setIcon:(id)arg1;
- (id)imageWithSize:(struct CGSize)arg1;
- (id)initWithIcon:(id)arg1;
- (id)initWithHomeScreenIcon:(id)arg1;
- (void)drawInContext:(id)arg1 inRect:(struct CGRect)arg2;

@end
