/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPAVRoute;

@interface MPAVRoutingControllerSelection : NSObject

{
    MPAVRoute *_route;
    long long _selectionOperation;
    CDUnknownBlockType _completion;
}

@property (retain, nonatomic) MPAVRoute *route;
@property (nonatomic) long long selectionOperation;
@property (copy, nonatomic) CDUnknownBlockType completion;

- (id)description;
- (id)initWithRoute:(id)arg1 selectionOperation:(long long)arg2;

@end
