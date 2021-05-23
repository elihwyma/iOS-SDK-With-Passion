/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class AFBulletin;

@interface SASBulletinCacheNode : NSObject

{
    AFBulletin *_bulletin;
    SASBulletinCacheNode *_previousNode;
    SASBulletinCacheNode *_nextNode;
}

@property (retain, nonatomic) AFBulletin *bulletin;
@property (retain, nonatomic) SASBulletinCacheNode *previousNode;
@property (retain, nonatomic) SASBulletinCacheNode *nextNode;

@end
