/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <NSObject.h>

@class ATXHeuristicDevice;

@interface ATXBestTimeToInteractWithContactDataSource : NSObject

{
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)arg1;
- (void)hourOfDayInteractionProbabilitiesWithContact:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end
