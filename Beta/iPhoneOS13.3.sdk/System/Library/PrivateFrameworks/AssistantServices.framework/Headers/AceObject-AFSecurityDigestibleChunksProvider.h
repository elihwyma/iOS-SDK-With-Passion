/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <SAObjects/AceObject.h>

@class NSString;

@interface AceObject (AFSecurityDigestibleChunksProvider)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)af_dialogIdentifier;
- (id)af_text;
- (id)af_speakableText;
- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)af_isUtterance;
- (id)af_analyticsContext;
- (void)af_addEntriesToAnalyticsContext:(id)arg1;
- (id)af_dialogIdentifiersForAnalyticsContext;
- (_Bool)_af_isKindOfDictationRequest;
- (_Bool)af_isUserUtterance;

@end
