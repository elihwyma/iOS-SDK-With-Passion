/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@protocol PUEditableAsset;

@interface PUEnterEditPerformanceEventBuilder : NSObject

{
    _Bool _editingWithRaw;
    id <PUEditableAsset> _asset;
    double _enterEditDuration;
    double _resourceCheckingDuration;
    double _resourceDownloadDuration;
    double _resourceLoadingDuration;
    double _autoCalcDuration;
}

@property (retain, nonatomic) id <PUEditableAsset> asset;
@property (nonatomic, getter=isEditingWithRaw) _Bool editingWithRaw;
@property (nonatomic) double enterEditDuration;
@property (nonatomic) double resourceCheckingDuration;
@property (nonatomic) double resourceDownloadDuration;
@property (nonatomic) double resourceLoadingDuration;
@property (nonatomic) double autoCalcDuration;

- (id)buildEvent;

@end
