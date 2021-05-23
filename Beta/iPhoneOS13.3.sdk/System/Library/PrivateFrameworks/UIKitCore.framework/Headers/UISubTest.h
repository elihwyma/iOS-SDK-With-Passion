/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface UISubTest : NSObject

{
    NSNumber *_startTime;
    NSNumber *_startFrame;
    NSMutableArray *_time;
    NSMutableArray *_fps;
    NSString *_testName;
    _Bool _showTime;
    _Bool _showFps;
    NSMutableDictionary *_data;
}

@property (readonly) NSNumber *startTime;

- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)outputData;
- (id)initWithName:(id)arg1 metrics:(id)arg2;
- (void)startWithFrameCount:(id)arg1;
- (void)stopWithFrameCount:(id)arg1;
- (id)getObjectForKey:(id)arg1;

@end
