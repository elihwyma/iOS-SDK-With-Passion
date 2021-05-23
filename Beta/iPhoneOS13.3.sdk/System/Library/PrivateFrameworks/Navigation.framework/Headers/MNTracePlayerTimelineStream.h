/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface MNTracePlayerTimelineStream : NSObject

{
    NSArray *_data;
    unsigned long long _nextIndex;
    double _nextUpdatePosition;
    CDUnknownBlockType _handler;
}

@property (copy, nonatomic) CDUnknownBlockType handler;
@property (nonatomic, readonly) unsigned long long nextIndex;
@property (nonatomic, readonly) double nextUpdatePosition;

- (id)initWithData:(id)arg1;
- (void)jumpToPosition:(double)arg1;
- (void)triggerNextUpdate;

@end
