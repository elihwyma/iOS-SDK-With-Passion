/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKProcessTaskStateObserverDelegate : NSObject

{
    CDUnknownBlockType _taskStateChangedCallback;
}

@property (copy) CDUnknownBlockType taskStateChangedCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)process:(id)arg1 taskStateDidChange:(long long)arg2;

@end
