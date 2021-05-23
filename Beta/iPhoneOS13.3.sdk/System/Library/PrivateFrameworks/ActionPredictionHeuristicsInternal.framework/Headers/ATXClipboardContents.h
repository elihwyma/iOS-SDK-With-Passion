/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <NSObject.h>

@class ATXHeuristicDevice, PBServerConnection;

@interface ATXClipboardContents : NSObject

{
    ATXHeuristicDevice *_device;
    PBServerConnection *_pasteboardServerConnection;
}

- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 pasteboardConnection:(id)arg2;
- (void)contentsWithCallback:(CDUnknownBlockType)arg1;

@end
