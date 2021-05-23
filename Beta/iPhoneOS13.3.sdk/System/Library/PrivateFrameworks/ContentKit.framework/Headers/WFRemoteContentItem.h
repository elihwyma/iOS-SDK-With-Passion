/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFGenericFileContentItem.h>

@class NSDictionary;

@interface WFRemoteContentItem : WFGenericFileContentItem

{
    NSDictionary *_serializedItem;
}

@property (copy, nonatomic) NSDictionary *serializedItem;

+ (id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3;

- (id)name;
- (id)preferredFileType;
- (id)initWithSerializedItem:(id)arg1 named:(id)arg2;
- (id)metadataForSerialization;

@end
