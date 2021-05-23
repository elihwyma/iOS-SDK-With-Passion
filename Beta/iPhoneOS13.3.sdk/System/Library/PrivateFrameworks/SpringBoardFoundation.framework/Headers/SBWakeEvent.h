/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@interface SBWakeEvent : NSObject

{
    unsigned long long _eventAbsTimestamp;
    unsigned long long _eventRecvContTimestamp;
}

@property (nonatomic) unsigned long long eventAbsTimestamp;
@property (nonatomic) unsigned long long eventRecvContTimestamp;

- (id)initWithTimestamp:(unsigned long long)arg1;

@end
