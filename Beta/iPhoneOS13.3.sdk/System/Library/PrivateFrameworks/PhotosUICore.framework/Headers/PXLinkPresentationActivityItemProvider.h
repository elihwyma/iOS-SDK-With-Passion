/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PXLinkPresentationConfiguration;

@interface PXLinkPresentationActivityItemProvider : NSObject

{
    PXLinkPresentationConfiguration *_configuration;
}

@property (nonatomic, readonly) PXLinkPresentationConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithConfiguration:(id)arg1;
- (id)activityViewControllerLinkPresentationMetadata:(id)arg1;
- (id)_linkMetadataForConfiguration:(id)arg1;

@end
