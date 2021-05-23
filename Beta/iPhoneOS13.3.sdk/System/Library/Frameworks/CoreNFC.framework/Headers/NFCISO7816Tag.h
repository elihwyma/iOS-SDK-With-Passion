/*
 Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

#import <CoreNFC/NFCTag.h>

@class NSData, NSString;

@protocol NFCReaderSession;

__attribute__((visibility("hidden")))
@interface NFCISO7816Tag : NFCTag

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long type;
@property (weak, nonatomic, readonly) id <NFCReaderSession> session;
@property (nonatomic, readonly, getter=isAvailable) _Bool available;
@property (retain, nonatomic, readonly) NSString *initialSelectedAID;
@property (copy, nonatomic, readonly) NSData *identifier;
@property (copy, nonatomic, readonly) NSData *historicalBytes;
@property (copy, nonatomic, readonly) NSData *applicationData;
@property (nonatomic, readonly) _Bool proprietaryApplicationDataCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)sendCommandAPDU:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
