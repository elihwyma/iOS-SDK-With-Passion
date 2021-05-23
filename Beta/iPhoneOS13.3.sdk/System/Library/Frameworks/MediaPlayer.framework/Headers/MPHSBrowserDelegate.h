/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MPHSBrowserDelegate : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)browser:(id)arg1 didAddLibrary:(id)arg2;
- (void)browser:(id)arg1 didRemoveLibrary:(id)arg2;

@end
