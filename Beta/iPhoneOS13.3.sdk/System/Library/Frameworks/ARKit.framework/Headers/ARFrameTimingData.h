/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface ARFrameTimingData : NSObject

{
    NSMutableDictionary *_timestampsByDataClassKey;
    double _videoLatency;
}

@property (nonatomic) double videoLatency;
@property (nonatomic, readonly) NSDictionary *timestamps;

- (id)init;
- (void)addTimestamp:(double)arg1 forDataOfClass:(Class)arg2;

@end
