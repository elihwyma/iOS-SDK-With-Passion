/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TVPBoundaryTimeObserverInfo : NSObject

{
    NSArray *_times;
    CDUnknownBlockType _handler;
    id _tokenFromAVPlayer;
}

@property (copy, nonatomic) NSArray *times;
@property (copy, nonatomic) CDUnknownBlockType handler;
@property (retain, nonatomic) id tokenFromAVPlayer;

@end
