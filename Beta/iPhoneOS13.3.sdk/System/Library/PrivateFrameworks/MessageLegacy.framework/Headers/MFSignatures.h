/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@interface MFSignatures : NSObject

+ (id)sharedInstance;
+ (id)signatureMarkupFormat:(id)arg1;
+ (id)signaturePlainTextFormat:(id)arg1;
+ (id)stripSignatureMarkup:(id)arg1;

- (id)init;
- (void)dealloc;
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
- (void)_setValue:(id)arg1 value:(void *)arg2;

@end
