/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, OS_os_transaction;

@interface NPKOSTransaction : NSObject

{
    NSObject<OS_os_transaction> *_transaction;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSString *_name;
}

@property (copy, nonatomic, readonly) NSString *name;

+ (id)transactionWithName:(id)arg1;

- (void)dealloc;
- (void)invalidate;
- (id)_initWithName:(id)arg1;

@end
