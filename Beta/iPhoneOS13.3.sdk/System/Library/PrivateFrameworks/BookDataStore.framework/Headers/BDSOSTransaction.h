/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <Foundation/NSObject.h>

@protocol OS_os_transaction;

@interface BDSOSTransaction : NSObject

{
    NSObject<OS_os_transaction> *_osTransaction;
}

@property (retain, nonatomic) NSObject<OS_os_transaction> *osTransaction;

- (void)dealloc;
- (void)endTransaction;
- (id)initWithTransactionName:(const char *)arg1;

@end
