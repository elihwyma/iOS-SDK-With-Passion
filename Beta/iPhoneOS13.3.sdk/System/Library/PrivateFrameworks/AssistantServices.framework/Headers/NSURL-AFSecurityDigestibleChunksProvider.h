/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (AFSecurityDigestibleChunksProvider)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_af_URLWithMessageIdentifier:(id)arg1;

- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_af_messageIdentifierValue;
- (_Bool)isAMOSIdentifier;
- (_Bool)isAMOSCommittedIdentifier;

@end
