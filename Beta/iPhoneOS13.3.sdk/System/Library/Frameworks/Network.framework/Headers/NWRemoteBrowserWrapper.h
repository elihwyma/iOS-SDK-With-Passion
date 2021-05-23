/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NSUUID, NWBrowser;

__attribute__((visibility("hidden")))
@interface NWRemoteBrowserWrapper : NSObject

{
    NSUUID *_clientID;
    NWBrowser *_browser;
}

@property (retain) NSUUID *clientID;
@property (retain) NWBrowser *browser;

@end
