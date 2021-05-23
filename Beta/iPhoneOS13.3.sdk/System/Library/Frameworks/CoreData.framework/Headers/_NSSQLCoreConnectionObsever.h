/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSSQLCore;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _NSSQLCoreConnectionObsever : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    int _token;
    NSSQLCore *_core;
}

- (void)dealloc;
- (id)initWithSQLCore:(id)arg1;
- (void)_clearBinding;
- (void)_postRemoteChangeNotificationWithTransactionID:(unsigned long long)arg1;
- (id)_retainedBinding;
- (void)_purgeCaches:(id)arg1;

@end
