/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, WFContentItem, WFFileRepresentation;

@interface WFContentItemProxy : NSObject

{
    WFContentItem *_item;
    WFContentItem *_originalItem;
    WFFileRepresentation *_file;
    CDUnknownBlockType _refreshBlock;
}

@property (retain, nonatomic) WFFileRepresentation *file;
@property (copy, nonatomic) CDUnknownBlockType refreshBlock;
@property (weak, nonatomic) WFContentItem *item;
@property (weak, nonatomic) WFContentItem *originalItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSURL *previewItemURL;
@property (nonatomic, readonly) NSString *previewItemTitle;

+ (id)previewRetrievalQueue;

@end
