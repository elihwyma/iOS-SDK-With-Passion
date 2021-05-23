/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@class NSMutableArray;

@interface WFEncodeMediaAction : WFAction

{
    NSMutableArray *_exportSessions;
}

@property (retain, nonatomic) NSMutableArray *exportSessions;

- (void)cancel;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (void)finishRunningWithError:(id)arg1;
- (id)nonEmptyStringValueForKey:(id)arg1;
- (void)getMetadataItems:(CDUnknownBlockType)arg1;
- (id)metadataForAsset:(id)arg1 newMetadata:(id)arg2;
- (void)encodeItems:(id)arg1 metadata:(id)arg2;
- (void)updateSpeedVisibility;

@end
