/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <TelephonyUtilities/TUMutableCallDisplayContext.h>

@class CXCallDirectoryManager, NSObject;

@protocol OS_dispatch_queue, TUDynamicCallDisplayContextDelegate;

@interface TUDynamicCallDisplayContext : TUMutableCallDisplayContext

{
    id <TUDynamicCallDisplayContextDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_serialQueue;
    CXCallDirectoryManager *_callDirectoryManager;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) CXCallDirectoryManager *callDirectoryManager;
@property (weak, nonatomic) id <TUDynamicCallDisplayContextDelegate> delegate;

- (id)init;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (id)initWithCall:(id)arg1 contactIdentifier:(id)arg2 serialQueue:(id)arg3;
- (id)initWithCall:(id)arg1 contactIdentifier:(id)arg2 serialQueue:(id)arg3 contactsDataSource:(id)arg4;
- (void)_initializeSynchronousStateWithCall:(id)arg1 contactIdentifier:(id)arg2 contactsDataProvider:(id)arg3;
- (void)_initializeAsynchronousStateWithCall:(id)arg1;
- (id)initWithDisplayContext:(id)arg1 call:(id)arg2 serialQueue:(id)arg3;

@end
