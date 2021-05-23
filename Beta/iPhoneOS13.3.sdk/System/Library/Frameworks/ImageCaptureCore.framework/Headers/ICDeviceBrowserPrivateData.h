/*
 Image: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ICDeviceBrowserPrivateData : NSObject

{
    id _delegate;
    _Bool _browsing;
    NSMutableArray *_internalDevices;
}

@property id delegate;
@property (getter=isBrowsing) _Bool browsing;
@property (retain) NSMutableArray *internalDevices;

- (void)dealloc;

@end
