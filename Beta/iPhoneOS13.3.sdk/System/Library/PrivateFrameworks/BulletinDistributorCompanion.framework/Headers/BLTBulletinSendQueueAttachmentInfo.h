/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface BLTBulletinSendQueueAttachmentInfo : NSObject

{
    NSURL *_url;
    NSString *_key;
}

@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *key;

@end
