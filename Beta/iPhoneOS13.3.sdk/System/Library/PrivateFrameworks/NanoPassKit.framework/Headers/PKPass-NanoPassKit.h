/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <PassKitCore/PKPass.h>

@class NSData, PKBarcode;

@interface PKPass (NanoPassKit)

@property (readonly) _Bool npkSupportsHidingAccessory;
@property (readonly) PKBarcode *npkWatchBarcode;
@property (readonly) _Bool npkExpired;
@property (readonly) NSData *npkCompleteHash;
@property (readonly) _Bool hasLogoImageSet;
@property (readonly) _Bool npkHasValidNFCPayload;

+ (void)npkHandleTransitValuePendingAmount:(id)arg1 withBalance:(id)arg2 forPassWithID:(id)arg3;
+ (void)npkClearTransitValuePendingStateIfNecessaryForPassWithID:(id)arg1 withBalance:(id)arg2;

- (long long)npkAccessoryType;
- (id)npkCompleteHashForWatchOSVersion:(unsigned long long)arg1;
- (_Bool)npkIsAddValuePending;
- (id)npkLastAddValueAmount;
- (id)npkArchiveData;

@end
