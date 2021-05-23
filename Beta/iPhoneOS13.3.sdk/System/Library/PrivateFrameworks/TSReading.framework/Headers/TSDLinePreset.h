/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSDLineEnd, TSDStroke;

@interface TSDLinePreset : NSObject

{
    TSDLineEnd *mHeadLineEnd;
    TSDLineEnd *mTailLineEnd;
    TSDStroke *mStroke;
}

@property (copy, nonatomic, readonly) TSDLineEnd *headLineEnd;
@property (copy, nonatomic, readonly) TSDLineEnd *tailLineEnd;
@property (copy, nonatomic, readonly) TSDStroke *stroke;

+ (id)lineWithStroke:(id)arg1 headLineEnd:(id)arg2 tailLineEnd:(id)arg3;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)initWithStroke:(id)arg1 headLineEnd:(id)arg2 tailLineEnd:(id)arg3;

@end
