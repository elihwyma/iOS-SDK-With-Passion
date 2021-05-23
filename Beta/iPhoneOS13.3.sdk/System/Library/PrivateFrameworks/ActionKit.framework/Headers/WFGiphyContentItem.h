/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ContentKit/WFGenericFileContentItem.h>

@interface WFGiphyContentItem : WFGenericFileContentItem

+ (id)typeDescription;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;

- (id)object;
- (void)generateObjectRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (void)getPreferredFileSize:(CDUnknownBlockType)arg1;
- (id)preferredFileType;

@end
