/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFContentItem.h>

@class WFEmailAddress;

@interface WFEmailAddressContentItem : WFContentItem

@property (nonatomic, readonly) WFEmailAddress *emailAddress;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (id)itemsWithTextCheckingResult:(id)arg1;

- (_Bool)getListAltText:(CDUnknownBlockType)arg1;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;

@end
