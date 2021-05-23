/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@protocol NSObject, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCContainerCellularSettings : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSNumber *_isCellularEnabledForDocumentsAndData;
    id <NSObject> _accountDidChangeNotificationObserver;
}

+ (id)_notifAccountStore;
+ (id)containerCellularSettings;

- (id)init;
- (void)dealloc;
- (void)_accountDidChange;
- (_Bool)isCellularEnabled;

@end
