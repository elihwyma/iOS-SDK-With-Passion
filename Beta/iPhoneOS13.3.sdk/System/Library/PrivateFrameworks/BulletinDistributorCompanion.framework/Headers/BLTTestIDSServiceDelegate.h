/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@protocol IDSServiceDelegate, OS_dispatch_queue;

@interface BLTTestIDSServiceDelegate : NSObject

{
    id <IDSServiceDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) id <IDSServiceDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

@end
