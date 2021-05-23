/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (BRCSignatureAdditions)

@property (nonatomic, readonly) _Bool brc_signatureIsPackage;
@property (nonatomic, readonly) _Bool brc_signatureIsValid;
@property (nonatomic, readonly) _Bool brc_signatureIsPendingPlaceHolder;
@property (nonatomic, readonly) NSString *brc_hexadecimalString;
@property (nonatomic, readonly) NSData *brc_signature;
@property (nonatomic, readonly) unsigned int br_qtnFlags;

+ (id)brc_pendingPlaceholderForPackage:(_Bool)arg1;

- (id)brc_SHA256WithSalt:(id)arg1;

@end
