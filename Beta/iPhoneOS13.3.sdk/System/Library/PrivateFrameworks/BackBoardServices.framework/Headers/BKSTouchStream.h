/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@interface BKSTouchStream : NSObject

{
    unsigned int _reference;
}

@property unsigned int reference;

- (void)invalidate;
- (id)initWithContextID:(unsigned int)arg1 displayUUID:(id)arg2 identifier:(unsigned char)arg3 policy:(id)arg4;
- (void)setEventDispatchMode:(unsigned char)arg1 ambiguityRecommendation:(unsigned char)arg2 lastTouchTimestamp:(double)arg3;
- (void)setEventDispatchMode:(unsigned char)arg1 lastTouchTimestamp:(double)arg2;

@end
