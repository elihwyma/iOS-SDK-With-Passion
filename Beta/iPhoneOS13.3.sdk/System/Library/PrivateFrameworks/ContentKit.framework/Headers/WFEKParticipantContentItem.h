/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFContentItem.h>

@interface WFEKParticipantContentItem : WFContentItem

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)filterDescription;
+ (id)pluralFilterDescription;
+ (id)possibleRoles;
+ (id)possibleStatuses;

- (id)role;
- (id)status;
- (_Bool)isCurrentUser;
- (id)participant;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (void)generateObjectRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (_Bool)canGenerateRepresentationForType:(id)arg1;
- (_Bool)canGenerateContact;

@end
