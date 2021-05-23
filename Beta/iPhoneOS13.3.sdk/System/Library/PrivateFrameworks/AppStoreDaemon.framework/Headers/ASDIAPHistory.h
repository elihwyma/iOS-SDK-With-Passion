/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

@class ASDServiceBroker, NSString;

@interface ASDIAPHistory : NSObject

{
    ASDServiceBroker *_serviceBroker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)interface;

- (id)init;
- (id)_initWithServiceBroker:(id)arg1;
- (void)getAllIAPsForActiveAccountWithResultHandler:(CDUnknownBlockType)arg1;
- (void)getIAPsForActiveAccountWithAdamIDs:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)refreshIAPsForActiveAccountWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
