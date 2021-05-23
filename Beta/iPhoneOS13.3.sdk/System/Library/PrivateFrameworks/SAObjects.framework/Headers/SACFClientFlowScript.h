/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseAceObject.h>

@class NSData, NSString, SACFScriptEncryptionParameters, SACFScriptUrlInformation;

@interface SACFClientFlowScript : SABaseAceObject

@property (copy, nonatomic) NSData *compressedScript;
@property (retain, nonatomic) SACFScriptEncryptionParameters *encryptionParameters;
@property (copy, nonatomic) NSString *fileContentType;
@property (copy, nonatomic) NSString *jsScript;
@property (copy, nonatomic) NSData *jsScriptChecksum;
@property (copy, nonatomic) NSString *jsScriptIdentifier;
@property (nonatomic) _Bool shouldCacheScript;
@property (nonatomic) _Bool shouldSkipExecution;
@property (retain, nonatomic) SACFScriptUrlInformation *urlInformation;

+ (id)clientFlowScript;
+ (id)clientFlowScriptWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
