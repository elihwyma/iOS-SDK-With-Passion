/*
 Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

#import <CoreNFC/NFCTag.h>

@class NSData, NSString;

@protocol NFCReaderSession;

__attribute__((visibility("hidden")))
@interface NFCMiFareTag : NFCTag

{
    unsigned long long _mifareFamily;
}

@property (nonatomic) unsigned long long mifareFamily;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long type;
@property (weak, nonatomic, readonly) id <NFCReaderSession> session;
@property (nonatomic, readonly, getter=isAvailable) _Bool available;
@property (copy, nonatomic, readonly) NSData *identifier;
@property (copy, nonatomic, readonly) NSData *historicalBytes;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSession:(id)arg1 tag:(id)arg2 startupConfig:(long long)arg3;
- (void)sendMiFareCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendMiFareISO7816Command:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
