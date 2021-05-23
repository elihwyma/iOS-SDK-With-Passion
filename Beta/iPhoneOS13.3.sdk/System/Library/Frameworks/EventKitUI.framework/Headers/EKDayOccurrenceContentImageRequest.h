/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKDayOccurrenceState;

@interface EKDayOccurrenceContentImageRequest : NSObject

{
    long long _requestId;
    unsigned long long _options;
    EKDayOccurrenceState *_state;
    CDUnknownBlockType _resultHandler;
}

@property (nonatomic, readonly) long long requestId;
@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) EKDayOccurrenceState *state;
@property (nonatomic, readonly) CDUnknownBlockType resultHandler;

- (id)initWithId:(long long)arg1 options:(unsigned long long)arg2 state:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;

@end
