/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class PICompositionController;

@protocol PUEditableAsset;

@interface PUExitEditPerformanceEventBuilder : NSObject

{
    _Bool _editingWithRaw;
    id <PUEditableAsset> _asset;
    long long _sessionEndReason;
    double _exitEditDuration;
    PICompositionController *_compositionController;
}

@property (retain, nonatomic) id <PUEditableAsset> asset;
@property (nonatomic, getter=isEditingWithRaw) _Bool editingWithRaw;
@property (nonatomic) long long sessionEndReason;
@property (nonatomic) double exitEditDuration;
@property (copy, nonatomic) PICompositionController *compositionController;

- (id)buildEvent;

@end
