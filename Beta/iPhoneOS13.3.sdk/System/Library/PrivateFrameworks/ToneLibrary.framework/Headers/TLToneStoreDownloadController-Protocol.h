/*
 Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <ToneLibrary/Swift-Protocol.h>

@class NSString;

@protocol TLToneStoreDownloadController <Swift>

@property (nonatomic, readonly) NSString *storeAccountName;

- (unsigned short)addObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)removeObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)openAlertToneStore;
- (unsigned short)openRingtoneStore;
- (unsigned short)redownloadAllTones;

@end
