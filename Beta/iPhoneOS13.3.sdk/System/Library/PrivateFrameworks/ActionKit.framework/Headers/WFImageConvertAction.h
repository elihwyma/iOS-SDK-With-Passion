/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@interface WFImageConvertAction : WFAction

- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)typeFromImageFormatString:(id)arg1;
- (id)imageQualityWithQuality:(id)arg1 imageFormat:(id)arg2;
- (_Bool)preserveMetadataWithPreserveMetadata:(_Bool)arg1 imageFormat:(id)arg2;

@end
