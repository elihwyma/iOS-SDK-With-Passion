/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSWPPadding;

@interface TSTTextEngineDelegate : NSObject

{
    TSWPPadding *mPadding;
    unsigned int mVerticalAlignment;
}

- (void)dealloc;
- (unsigned int)verticalAlignment;
- (id)padding;
- (_Bool)forceWesternLineBreaking;
- (id)initWithPadding:(struct UIEdgeInsets)arg1 verticalAlignment:(unsigned int)arg2;

@end
