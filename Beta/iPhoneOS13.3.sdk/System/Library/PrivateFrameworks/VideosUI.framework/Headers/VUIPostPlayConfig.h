/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIPostPlayConfig : NSObject

{
    double _bootstrapInterval;
    double _documentUpdateOffsetInterval;
    unsigned long long _maximumAutoPlayableItems;
    double _duration;
}

@property (nonatomic) double bootstrapInterval;
@property (nonatomic) double documentUpdateOffsetInterval;
@property (nonatomic) unsigned long long maximumAutoPlayableItems;
@property (nonatomic) double duration;

- (id)init;

@end
