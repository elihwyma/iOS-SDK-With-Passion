/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKRecord, NSError;

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKRecordDecryptInfo : NSObject

{
    CKRecord *_record;
    NSError *_error;
    NSObject<OS_dispatch_group> *_decryptGroup;
    CDUnknownBlockType _callback;
    unsigned long long _numUnwrapAttempts;
}

@property (nonatomic, readonly) CKRecord *record;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *decryptGroup;
@property (copy, nonatomic) CDUnknownBlockType callback;
@property unsigned long long numUnwrapAttempts;

- (id)init;
- (void)_setupDecryptCallbackForQueue:(id)arg1;
- (id)initWithRecord:(id)arg1 callbackQueue:(id)arg2;

@end
