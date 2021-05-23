/*
 Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

#import <NSObject.h>

@interface _PSPhotoSuggestions : NSObject

+ (id)photoSuggestedPeopleFromAttachments:(id)arg1;
+ (id)contactIDsByAssetPresenceInAttachments:(id)arg1;
+ (id)suggestionTemplateForPhotoContactIdWithMessages:(id)arg1 cdInteraction:(id)arg2 reason:(id)arg3 reasonType:(id)arg4;
+ (id)partitionPeopleSuggestionProxiesFromPhotosByAssetPresenceInAttachments:(id)arg1 photoSuggestedPeople:(id)arg2 contactIDsInAssets:(id)arg3;

@end
