/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSDStroke;

@interface TSTTableStrokePresetData : NSObject

{
    TSDStroke *mHorizontalStroke;
    TSDStroke *mVerticalStroke;
    TSDStroke *mExteriorStroke;
    unsigned int mVisibleMask;
}

@property (retain, nonatomic) TSDStroke *horizontalStroke;
@property (retain, nonatomic) TSDStroke *verticalStroke;
@property (retain, nonatomic) TSDStroke *exteriorStroke;
@property (nonatomic) unsigned int mask;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)initWithMask:(unsigned int)arg1 horizontalStroke:(id)arg2 verticalStroke:(id)arg3 exteriorStroke:(id)arg4;

@end
