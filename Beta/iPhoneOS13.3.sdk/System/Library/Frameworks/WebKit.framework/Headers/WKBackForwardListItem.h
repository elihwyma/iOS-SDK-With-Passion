/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface WKBackForwardListItem : NSObject

{
    struct ObjectStorage<WebKit::WebBackForwardListItem> _item;
}

@property (readonly) struct WebBackForwardListItem *_item;
@property (copy, readonly) NSURL *URL;
@property (copy, readonly) NSString *title;
@property (copy, readonly) NSURL *initialURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (void)dealloc;
- (struct CGPoint)_scrollPosition;
- (struct CGImage *)_copySnapshotForTesting;

@end
