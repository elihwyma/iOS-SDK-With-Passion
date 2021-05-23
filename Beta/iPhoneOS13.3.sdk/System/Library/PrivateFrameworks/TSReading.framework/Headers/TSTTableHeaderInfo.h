/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSTCellStyle, TSWPParagraphStyle;

@interface TSTTableHeaderInfo : NSObject

{
    TSTCellStyle *mCellStyle;
    TSWPParagraphStyle *mTextStyle;
    double mSize;
    unsigned char mHidingState;
    unsigned short mNumberOfCells;
}

@property (retain, nonatomic) TSTCellStyle *cellStyle;
@property (retain, nonatomic) TSWPParagraphStyle *textStyle;
@property (nonatomic) double size;
@property (nonatomic) unsigned char hidingState;
@property (nonatomic) unsigned short numberOfCells;

- (void)dealloc;
- (id)description;

@end
