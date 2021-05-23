/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class CLSEvent;

@interface CLSEventResult : NSObject

{
    float _confidence;
    CLSEvent *_event;
}

@property (retain, nonatomic) CLSEvent *event;
@property (nonatomic) float confidence;

+ (id)eventResultWithEvent:(id)arg1 andConfidence:(float)arg2;

- (id)description;
- (_Bool)isSameEventAsResult:(id)arg1;
- (void)mergeWithResult:(id)arg1;

@end
