/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ContentKit/WFContentItem.h>

@class ENNoteRef;

@interface WFEvernoteContentItem : WFContentItem

@property (nonatomic, readonly) ENNoteRef *noteRef;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (void)createNoteWithContent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)itemWithNoteRef:(id)arg1 note:(id)arg2;

- (id)name;
- (_Bool)getListSubtitle:(CDUnknownBlockType)arg1;
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateFileRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (_Bool)includesFileRepresentationInSerializedItem;
- (id)preferredFileType;
- (_Bool)canEncodeWithCoder:(id)arg1;

@end
