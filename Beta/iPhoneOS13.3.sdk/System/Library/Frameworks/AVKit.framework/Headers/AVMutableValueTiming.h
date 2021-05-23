/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <AVKit/AVValueTiming.h>

@interface AVMutableValueTiming : AVValueTiming

@property (nonatomic) double anchorValue;
@property (nonatomic) double anchorTimeStamp;
@property (nonatomic) double rate;

+ (id)allocWithZone:(struct _NSZone *)arg1;

- (Class)classForCoder;
- (void)setValueTiming:(id)arg1;

@end
