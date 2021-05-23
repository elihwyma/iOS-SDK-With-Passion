/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSOrderedSet, NSString;

@interface SVVideoQueueDiff : NSObject

{
    NSOrderedSet *_videosToInsert;
    NSOrderedSet *_videosToRemove;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSOrderedSet *videosToInsert;
@property (nonatomic, readonly) NSOrderedSet *videosToRemove;

- (id)initWithVideosToInsert:(id)arg1 videosToRemove:(id)arg2;

@end
