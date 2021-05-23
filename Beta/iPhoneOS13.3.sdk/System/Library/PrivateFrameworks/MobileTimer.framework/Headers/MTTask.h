/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTGCDTimer, NSString;

@interface MTTask : NSObject

{
    NSString *_identifier;
    double _delay;
    CDUnknownBlockType _completableBlock;
    MTGCDTimer *_timer;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double delay;
@property (copy, nonatomic) CDUnknownBlockType completableBlock;
@property (retain, nonatomic) MTGCDTimer *timer;

+ (id)taskWithIdentifier:(id)arg1 delay:(double)arg2 completableBlock:(CDUnknownBlockType)arg3;
+ (id)taskWithIdentifier:(id)arg1 completableBlock:(CDUnknownBlockType)arg2;

- (id)description;

@end
