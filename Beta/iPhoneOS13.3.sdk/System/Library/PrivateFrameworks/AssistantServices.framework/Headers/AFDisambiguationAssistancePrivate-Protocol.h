/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class AFDisambiguationInfo, NSData;

@protocol AFDisambiguationAssistancePrivate

@property (nonatomic, readonly) NSData *af_disambiguationIdentifier;
@property (retain, nonatomic, setter=af_setDisambiguationInfo:) AFDisambiguationInfo *af_disambiguationInfo;

- (unsigned short)af_indexIdentifierForItem: /* Error: Ran out of types for this method. */;
- (unsigned short)af_itemForIndexIdentifier: /* Error: Ran out of types for this method. */;

@end
