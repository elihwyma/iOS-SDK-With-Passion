/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL, _WKFrameHandle;

@interface WKWebProcessPlugInFrame : NSObject

{
    struct ObjectStorage<WebKit::WebFrame> _frame;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSArray *childFrames;
@property (nonatomic, readonly) _Bool containsAnyFormElements;
@property (nonatomic, readonly) _WKFrameHandle *handle;
@property (nonatomic, readonly) NSArray *appleTouchIconURLs;
@property (nonatomic, readonly) NSArray *faviconURLs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

+ (id)lookUpFrameFromHandle:(id)arg1;

- (void)dealloc;
- (id)hitTest:(struct CGPoint)arg1;
- (id)_certificateChain;
- (struct __SecTrust *)_serverTrust;
- (id)jsContextForWorld:(id)arg1;
- (id)jsNodeForNodeHandle:(id)arg1 inWorld:(id)arg2;
- (id)jsRangeForRangeHandle:(id)arg1 inWorld:(id)arg2;
- (id)_browserContextController;
- (id)_parentFrame;
- (_Bool)_hasCustomContentProvider;
- (id)_provisionalURL;

@end
