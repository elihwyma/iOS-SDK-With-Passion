/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSWPColumn, TSWPShapeLayout;

@interface TSWPInteriorCookie : NSObject

{
    TSWPColumn *_column;
    TSWPShapeLayout *_shapeLayout;
}

@property (nonatomic) TSWPColumn *column;
@property (nonatomic) TSWPShapeLayout *layout;

@end
