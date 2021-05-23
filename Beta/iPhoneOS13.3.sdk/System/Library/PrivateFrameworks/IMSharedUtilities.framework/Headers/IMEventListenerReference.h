/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class IMEventListener;

@interface IMEventListenerReference : NSObject

{
    IMEventListener *_eventListener;
}

@property (weak, nonatomic, readonly) IMEventListener *eventListener;

- (id)initWithEventListener:(id)arg1;

@end
