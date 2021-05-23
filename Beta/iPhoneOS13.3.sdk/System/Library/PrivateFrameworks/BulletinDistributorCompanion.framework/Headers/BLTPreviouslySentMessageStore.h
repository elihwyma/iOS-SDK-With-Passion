/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BLTPreviouslySentMessageStore : NSObject

{
    NSMutableDictionary *_messageDigests;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_saveTimer;
    NSString *_path;
    _Bool _dirty;
}

@property (nonatomic) _Bool dirty;

- (void)dealloc;
- (void)invalidate;
- (void)clear;
- (_Bool)isEmpty;
- (void)_save;
- (id)initWithMessageStorePath:(id)arg1;
- (id)messageDigestForUnsentMessage:(id)arg1 messageKey:(id)arg2;
- (void)recordMessageDigestAsPreviouslySent:(id)arg1 messageKey:(id)arg2;
- (void)removeDigestForKey:(id)arg1;
- (void)_cancelSave;
- (void)_enqueueSave;

@end
