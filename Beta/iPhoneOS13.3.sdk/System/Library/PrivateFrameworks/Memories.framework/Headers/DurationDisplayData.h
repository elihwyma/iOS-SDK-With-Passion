/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface DurationDisplayData : NSObject

{
    NSString *_localizedName;
    double _duration;
}

@property (retain) NSString *localizedName;
@property double duration;

+ (id)pairWithDuration:(double)arg1;

@end
