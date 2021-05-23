/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDDrawableInfo.h>

@class EQKitEquation;

@interface TSWPEquationInfo : TSDDrawableInfo

{
    EQKitEquation *_equation;
}

@property (retain, nonatomic) EQKitEquation *equation;

- (void)dealloc;
- (Class)layoutClass;
- (id)copyWithContext:(id)arg1;
- (Class)repClass;
- (id)initWithContext:(id)arg1 mathMLNode:(struct _xmlNode *)arg2 fromXMLDoc:(struct _xmlDoc *)arg3;

@end
