/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPPropertySet;

@interface MPCModelRadioStationBuilder : NSObject

{
    struct {
        unsigned int initialized:1;
        unsigned int beats1:1;
        unsigned int name:1;
        unsigned int editorNotes:1;
        unsigned int shortEditorNotes:1;
        unsigned int explicit;
        unsigned int artwork:1;
        unsigned int allowsItemLiking:1;
        unsigned int attributionLabel:1;
        unsigned int type:1;
        unsigned int subtype:1;
        unsigned int subscriptionRequired:1;
    } _requestedRadioStationProperties;
    MPPropertySet *_requestedProperties;
}

@property (copy, nonatomic, readonly) MPPropertySet *requestedProperties;

- (id)initWithRequestedProperties:(id)arg1;
- (id)modelRadioStationForMetadata:(id)arg1;

@end
