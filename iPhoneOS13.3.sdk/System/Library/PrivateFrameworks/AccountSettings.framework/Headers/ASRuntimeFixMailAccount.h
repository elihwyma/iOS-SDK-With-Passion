//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccountSettings/ASRuntimeFixProtocol-Protocol.h>

@class NSSet;

@interface ASRuntimeFixMailAccount : NSObject <ASRuntimeFixProtocol>
{
    BOOL _shouldNotifyMobileMail;
    NSSet *_supportedMailClasses;
}

- (id)supportedAccountTypes;
- (void)accountsHaveBeenSaved:(BOOL)arg1;
- (int)fixBasicAccountIfNeeded:(id)arg1 loggingMessage:(id)arg2;
- (void)dealloc;
- (id)init;
- (BOOL)_cleanupAccountClass:(id)arg1;

@end

