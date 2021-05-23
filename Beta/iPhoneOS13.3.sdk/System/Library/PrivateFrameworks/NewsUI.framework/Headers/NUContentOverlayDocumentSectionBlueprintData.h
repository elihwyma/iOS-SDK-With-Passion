/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class SXDocumentSectionBlueprint;

@interface NUContentOverlayDocumentSectionBlueprintData : NSObject

{
    SXDocumentSectionBlueprint *_blueprint;
    double _topOffset;
}

@property (nonatomic, readonly) SXDocumentSectionBlueprint *blueprint;
@property (nonatomic, readonly) double topOffset;

- (id)initWithBlueprint:(id)arg1 topOffset:(double)arg2;

@end
