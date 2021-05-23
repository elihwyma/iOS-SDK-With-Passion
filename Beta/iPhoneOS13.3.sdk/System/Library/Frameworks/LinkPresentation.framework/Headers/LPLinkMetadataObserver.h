/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPLinkMetadata;

@interface LPLinkMetadataObserver : NSObject

{
    LPLinkMetadata *_metadata;
    CDUnknownBlockType _callback;
    _Bool _hasScheduledCallback;
}

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObserving;
- (id)initWithMetadata:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end
