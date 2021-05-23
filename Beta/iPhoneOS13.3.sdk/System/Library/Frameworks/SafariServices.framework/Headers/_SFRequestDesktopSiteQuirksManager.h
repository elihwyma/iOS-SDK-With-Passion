/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class WBSRemotePlistController;

@interface _SFRequestDesktopSiteQuirksManager : NSObject

{
    WBSRemotePlistController *_remotePlistController;
}

+ (id)sharedManager;

- (id)init;
- (void)getAllQuirkValuesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)quirksValueForDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
