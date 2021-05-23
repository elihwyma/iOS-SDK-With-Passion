/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface BBDismissalItem : NSObject

{
    unsigned long long _feeds;
    NSDate *_expiration;
}

@property (nonatomic, readonly) unsigned long long feeds;
@property (nonatomic, readonly) NSDate *expiration;

- (id)description;
- (_Bool)hasExpired;
- (id)initWithFeeds:(unsigned long long)arg1;
- (void)addFeeds:(unsigned long long)arg1;

@end
