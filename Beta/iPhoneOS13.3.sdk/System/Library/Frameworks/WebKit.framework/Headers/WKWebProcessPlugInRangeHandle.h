/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, WKWebProcessPlugInFrame;

@interface WKWebProcessPlugInRangeHandle : NSObject

{
    struct ObjectStorage<WebKit::InjectedBundleRangeHandle> _rangeHandle;
}

@property (readonly) struct InjectedBundleRangeHandle *_rangeHandle;
@property (nonatomic, readonly) WKWebProcessPlugInFrame *frame;
@property (copy, nonatomic, readonly) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

+ (id)rangeHandleWithJSValue:(id)arg1 inContext:(id)arg2;

- (void)dealloc;
- (id)detectDataWithTypes:(unsigned long long)arg1 context:(id)arg2;

@end
