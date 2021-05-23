/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSString.h>

@interface NSString (CKUtilsAdditions)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)ckShortDescription;
- (id)CKSanitizedPath;
- (id)CKSafeStringForURLWithCharsToBeEscaped:(id)arg1;
- (id)CKSafeStringForPathComponent;
- (id)CKSafeHashStringForPathComponent;
- (id)CKSafeStringForURLPathComponent;
- (id)CKMangledDocumentNameForURLFragment;
- (id)CKUnmangledDocumentNameFromURLFragment;
- (id)CKSHA256;
- (id)CKNilIfLengthZero;
- (id)CKBase64EncodedURLSafeString;
- (id)CKBase64DecodedString;
- (id)_CKDPIdentifierWithType:(int)arg1;
- (id)CKDPIdentifier_Raw;
- (id)CKDPIdentifier_Record;
- (id)CKDPIdentifier_User;
- (id)CKDPIdentifier_Device;
- (id)CKDPIdentifier_Subscription;
- (id)CKDPIdentifier_ShareId;
- (id)CKDPIdentifier_Zone;

@end
