/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface TVPMediaItemRollInfo : NSObject

{
    _Bool _skippable;
    unsigned long long _type;
    double _start;
    double _duration;
    NSNumber *_adamID;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) double start;
@property (nonatomic, readonly) double duration;
@property (retain, nonatomic) NSNumber *adamID;
@property (nonatomic, getter=isSkippable) _Bool skippable;

- (id)description;
- (id)_typeDescription;
- (id)initWithType:(unsigned long long)arg1 start:(double)arg2 duration:(double)arg3;

@end
