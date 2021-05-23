/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface BBObserverGatewayAddBulletinRequest : NSObject

{
    NSString *_bulletinID;
    NSString *_sectionID;
    NSDate *_timeout;
    CDUnknownBlockType _timeoutHandler;
}

@property (copy, nonatomic) NSString *bulletinID;
@property (copy, nonatomic) NSString *sectionID;
@property (retain, nonatomic) NSDate *timeout;
@property (copy, nonatomic) CDUnknownBlockType timeoutHandler;

@end
