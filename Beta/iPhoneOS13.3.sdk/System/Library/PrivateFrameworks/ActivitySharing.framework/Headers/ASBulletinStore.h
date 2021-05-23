/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface ASBulletinStore : NSObject

{
    NSArray *_bulletins;
}

@property (nonatomic, readonly) NSArray *bulletins;

- (id)init;
- (void)removeAllBulletins;
- (void)_persistBulletins;
- (void)addBulletins:(id)arg1;
- (void)removeBulletinsMatchingCriteria:(CDUnknownBlockType)arg1;

@end
