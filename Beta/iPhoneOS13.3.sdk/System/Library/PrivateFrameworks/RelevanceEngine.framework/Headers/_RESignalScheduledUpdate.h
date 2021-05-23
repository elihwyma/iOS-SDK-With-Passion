/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface _RESignalScheduledUpdate : NSObject

{
    double _interval;
    CDUnknownBlockType _completion;
    NSDate *_lastFireDate;
}

@property (nonatomic) double interval;
@property (copy, nonatomic) CDUnknownBlockType completion;
@property (retain, nonatomic) NSDate *lastFireDate;

@end
