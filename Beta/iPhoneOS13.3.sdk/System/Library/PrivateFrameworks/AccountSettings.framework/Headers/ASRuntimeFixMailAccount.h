/*
 Image: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

#import <NSObject.h>

@class NSSet, NSString;

@interface ASRuntimeFixMailAccount : NSObject

{
    _Bool _shouldNotifyMobileMail;
    NSSet *_supportedMailClasses;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)supportedAccountTypes;
- (int)fixBasicAccountIfNeeded:(id)arg1 loggingMessage:(id)arg2;
- (void)accountsHaveBeenSaved:(_Bool)arg1;
- (_Bool)_cleanupAccountClass:(id)arg1;

@end
