/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@interface MFSignatures : NSObject

- (id)init;
- (id)signature;
- (void)setSignature:(id)arg1;
- (id)_modelSpecificLocalizedStringKeyForKey:(id)arg1;
- (id)_getValue:(id)arg1;
- (id)defaultSignature;
- (id)signatureForAccount:(id)arg1;
- (_Bool)useAccountSignatures;
- (void)setSignature:(id)arg1 forAccount:(id)arg2;
- (id)signatureForSendingEmailAddress:(id)arg1;
- (void)clearSignature;
- (void)setUseAccountSignatures:(_Bool)arg1;
- (void)setSignature:(id)arg1 forEmailAddress:(id)arg2;
- (id)signatureMarkupForSendingEmailAddress:(id)arg1;
- (id)signaturePlainTextForSendingEmailAddress:(id)arg1;

@end
