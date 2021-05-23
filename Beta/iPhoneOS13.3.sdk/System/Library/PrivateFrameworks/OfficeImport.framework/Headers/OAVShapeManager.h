/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSDictionary, OAVReadState, OCPPackagePart;

__attribute__((visibility("hidden")))
@interface OAVShapeManager : NSObject

{
    struct _xmlNode *mShape;
    unsigned short mType;
    OCPPackagePart *mPackagePart;
    NSDictionary *mShapeStyle;
    NSDictionary *mTextBoxStyle;
    OAVReadState *mOAVState;
}

- (unsigned short)type;
- (id)path;
- (struct _xmlNode *)shape;
- (id)shadowColor;
- (id)points;
- (float)shadowAlpha;
- (_Bool)isImage;
- (float)strokeWidth;
- (struct OAVTextBoxInsets)textInsets;
- (_Bool)isFilled;
- (id)fillType;
- (id)shadowType;
- (id)textRotation;
- (id)textAnchor;
- (id)packagePart;
- (id)oavState;
- (id)fillFgColor;
- (_Bool)isStroked;
- (id)strokeFgColor;
- (id)fillBgColor;
- (id)strokeBgColor;
- (float)fillFgAlpha;
- (float)fillAngle;
- (float)fillBgAlpha;
- (float)fillFocus;
- (id)fillGradientColors;
- (id)strokeFillType;
- (float)strokeFgAlpha;
- (float)strokeMiterLimit;
- (id)strokeCompoundType;
- (id)strokeCapStyle;
- (id)strokeJoinStyle;
- (id)strokeStartArrowType;
- (id)strokeStartArrowWidth;
- (id)strokeStartArrowLength;
- (id)strokeEndArrowType;
- (id)strokeEndArrowWidth;
- (id)strokeEndArrowLength;
- (_Bool)isShadowed;
- (id)limo;
- (_Bool)isFillOK;
- (_Bool)isStrokeOK;
- (_Bool)isShadowOK;
- (id)imageRelId;
- (id)movieRelId;
- (id)initWithShape:(struct _xmlNode *)arg1 type:(unsigned short)arg2 packagePart:(id)arg3 state:(id)arg4;
- (_Bool)isPolyline;
- (_Bool)isWordArt;
- (id)textBodyRects;
- (id)imageFillId;
- (id)imageFillTitle;
- (struct CGPoint)shadowOffsets;
- (id)textWrapStyle;
- (_Bool)autoInsets;
- (id)textLayoutFlow;
- (id)textAltLayoutFlow;
- (_Bool)fitShapeToText;
- (id)strokeDashStyle;

@end
