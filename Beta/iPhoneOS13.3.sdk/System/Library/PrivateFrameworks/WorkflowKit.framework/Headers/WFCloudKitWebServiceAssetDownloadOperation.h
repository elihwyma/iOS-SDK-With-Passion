/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFCloudKitAsyncOperation.h>

@class NSString, NSURL;

@protocol WFCloudKitItem;

@interface WFCloudKitWebServiceAssetDownloadOperation : WFCloudKitAsyncOperation

{
    NSURL *_assetURL;
    id <WFCloudKitItem> _item;
    NSString *_key;
}

@property (retain, nonatomic) NSURL *assetURL;
@property (weak, nonatomic) id <WFCloudKitItem> item;
@property (retain, nonatomic) NSString *key;

- (void)start;
- (id)initWithAssetURL:(id)arg1 item:(id)arg2 key:(id)arg3;

@end
