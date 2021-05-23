/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface MFPen : NSObject

{
    int m_penStyle;
    int m_penWidth;
    OITSUColor *m_colour;
    double *m_userStyleArray;
}

+ (id)penWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double *)arg4;
+ (id)pen;

- (id)init;
- (int)selectInto:(id)arg1;
- (int)getWidth;
- (id)initWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double *)arg4;
- (int)getStyle;
- (id)getColor;

@end
