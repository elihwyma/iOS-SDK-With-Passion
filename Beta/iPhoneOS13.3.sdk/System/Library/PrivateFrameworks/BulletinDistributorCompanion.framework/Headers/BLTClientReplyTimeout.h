/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface BLTClientReplyTimeout : NSObject

{
    NSDate *_timeout;
    CDUnknownBlockType _timeoutHandler;
}

@property (retain, nonatomic) NSDate *timeout;
@property (copy, nonatomic) CDUnknownBlockType timeoutHandler;

@end
