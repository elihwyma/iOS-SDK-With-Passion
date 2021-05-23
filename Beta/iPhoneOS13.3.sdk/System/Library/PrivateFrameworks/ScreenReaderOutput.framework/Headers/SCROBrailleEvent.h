/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <Foundation/NSObject.h>

@interface SCROBrailleEvent : NSObject

{
    int _type;
    id _data;
    id _data2;
    id _data3;
    _Bool _shouldDisplay;
}

@property (nonatomic, readonly) int type;
@property (nonatomic) _Bool shouldDisplay;

+ (id)eventWithType:(int)arg1 data:(id)arg2;
+ (id)eventWithType:(int)arg1 data:(id)arg2 data2:(id)arg3 data3:(id)arg4;

- (id)description;
- (id)data;
- (id)data2;
- (id)initWithType:(int)arg1 data:(id)arg2 data2:(id)arg3 data3:(id)arg4;
- (id)data3;

@end
