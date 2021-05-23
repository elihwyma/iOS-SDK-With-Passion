/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSWPRep;

@interface TSWPBeginMagnificationUserInfo : NSObject

{
    TSWPRep *_target;
    struct CGPoint _magnificationPoint;
    struct CGPoint _offset;
    _Bool _animated;
}

@property (nonatomic) TSWPRep *target;
@property (nonatomic) struct CGPoint magnificationPoint;
@property (nonatomic) struct CGPoint offset;
@property (nonatomic) _Bool animated;

@end
