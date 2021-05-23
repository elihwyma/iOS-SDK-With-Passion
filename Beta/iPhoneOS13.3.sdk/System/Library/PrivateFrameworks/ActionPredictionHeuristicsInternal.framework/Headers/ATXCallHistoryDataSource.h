/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <NSObject.h>

@class ATXHeuristicDevice;

@interface ATXCallHistoryDataSource : NSObject

{
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)arg1;
- (void)callNewerThan:(double)arg1 showIncoming:(_Bool)arg2 showOutgoing:(_Bool)arg3 missedOnly:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
- (id)_dictForCall:(id)arg1;
- (id)_dictForHandle:(id)arg1;

@end
