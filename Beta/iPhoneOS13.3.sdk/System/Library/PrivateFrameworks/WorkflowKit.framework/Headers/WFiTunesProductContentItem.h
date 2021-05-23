/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFiTunesObjectContentItem.h>

@interface WFiTunesProductContentItem : WFiTunesObjectContentItem

+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;

- (id)storeObject;
- (id)mediaTrackObject;
- (_Bool)getListSubtitle:(CDUnknownBlockType)arg1;
- (_Bool)getListAltText:(CDUnknownBlockType)arg1;
- (_Bool)getListThumbnail:(CDUnknownBlockType)arg1 forSize:(struct CGSize)arg2;

@end
