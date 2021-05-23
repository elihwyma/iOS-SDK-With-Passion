/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString, WKWebProcessPlugInFrame;

__attribute__((visibility("hidden")))
@interface SFFormAutoFillFrame : NSObject

{
    WKWebProcessPlugInFrame *_plugInFrame;
}

@property (nonatomic, readonly) WKWebProcessPlugInFrame *plugInFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)autoFillFrameWithWebProcessPlugInFrame:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)committedURL;
- (_Bool)containsAnyFormElements;
- (id)initWithWebProcessPlugInFrame:(id)arg1;
- (id)_pageContoller;
- (id)_formMetadataController;
- (struct OpaqueFormAutoFillFrame *)frameRef;
- (struct OpaqueJSContext *)jsContextForMetadataControllerScriptWorld;
- (struct OpaqueJSValue *)jsWrapperInMetadataControllerScriptWorldForNode:(id)arg1;
- (void)enumerateChildFramesUsingBlock:(CDUnknownBlockType)arg1;
- (id)pageMainFrame;

@end
