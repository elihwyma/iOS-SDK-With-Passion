/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class BBBulletin;

@interface BBSyncDelayedDismissal : NSObject

{
    BBBulletin *_bulletin;
    unsigned long long _feeds;
}

@property (retain, nonatomic) BBBulletin *bulletin;
@property (nonatomic) unsigned long long feeds;

@end
