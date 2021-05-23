/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKPlayer, NSData;

@interface GKMatchEvent : NSObject

{
    NSData *_data;
    GKPlayer *_recipientPlayer;
}

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) GKPlayer *recipientPlayer;

- (void)dealloc;

@end
