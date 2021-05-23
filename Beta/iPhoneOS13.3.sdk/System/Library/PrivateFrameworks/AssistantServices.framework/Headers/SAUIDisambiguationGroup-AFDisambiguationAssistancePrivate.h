/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <SAObjects/SAUIDisambiguationGroup.h>

@class AFDisambiguationInfo, NSData;

@interface SAUIDisambiguationGroup (AFDisambiguationAssistancePrivate)

@property (nonatomic, readonly) NSData *af_disambiguationIdentifier;
@property (retain, nonatomic, setter=af_setDisambiguationInfo:) AFDisambiguationInfo *af_disambiguationInfo;

- (id)af_indexIdentifierForItem:(id)arg1;
- (id)af_itemForIndexIdentifier:(id)arg1;
- (id)af_assistedSelectionItem;
- (void)af_saveItemSelection:(id)arg1 forType:(long long)arg2;

@end
