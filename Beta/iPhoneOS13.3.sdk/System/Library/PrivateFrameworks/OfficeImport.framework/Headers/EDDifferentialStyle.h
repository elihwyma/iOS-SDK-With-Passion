/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class EDAlignmentInfo, EDBorders, EDContentFormat, EDFill, EDFont, EDProtection;

__attribute__((visibility("hidden")))
@interface EDDifferentialStyle : NSObject <Swift>

{
    EDAlignmentInfo *mAlignmentInfo;
    EDBorders *mBorders;
    EDFill *mFill;
    EDFont *mFont;
    EDProtection *mProtection;
    EDContentFormat *mContentFormat;
}

@property (retain, nonatomic) EDAlignmentInfo *alignmentInfo;
@property (retain, nonatomic) EDBorders *borders;
@property (retain, nonatomic) EDFill *fill;
@property (retain, nonatomic) EDFont *font;
@property (retain, nonatomic) EDProtection *protection;
@property (retain, nonatomic) EDContentFormat *contentFormat;

+ (id)differentialStyle;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
