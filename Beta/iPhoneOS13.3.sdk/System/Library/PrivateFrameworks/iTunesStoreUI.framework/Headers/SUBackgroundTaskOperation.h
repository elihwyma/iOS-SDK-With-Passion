/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface SUBackgroundTaskOperation : ISOperation

{
    ISOperation *_operation;
    NSString *_permissionIdentifier;
    unsigned long long _taskIdentifier;
}

@property (readonly) ISOperation *operation;
@property (readonly) NSString *permissionIdentifier;

- (void)dealloc;
- (void)run;
- (void)_takeBackgroundAssertion;
- (void)_removeBackgroundAssertion;
- (void)_cancelBackgroundAssertion;
- (id)initWithOperation:(id)arg1 identifier:(id)arg2;

@end
