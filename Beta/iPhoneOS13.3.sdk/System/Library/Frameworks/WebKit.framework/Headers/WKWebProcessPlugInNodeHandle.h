/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString, WKWebProcessPlugInFrame;

@interface WKWebProcessPlugInNodeHandle : NSObject

{
    struct ObjectStorage<WebKit::InjectedBundleNodeHandle> _nodeHandle;
}

@property (readonly) struct InjectedBundleNodeHandle *_nodeHandle;
@property (nonatomic, readonly) struct CGRect elementBounds;
@property (nonatomic) _Bool HTMLInputElementIsAutoFilled;
@property (nonatomic, readonly) _Bool HTMLInputElementIsUserEdited;
@property (nonatomic, readonly) _Bool HTMLTextAreaElementIsUserEdited;
@property (nonatomic, readonly) WKWebProcessPlugInNodeHandle *HTMLTableCellElementCellAbove;
@property (nonatomic, readonly) WKWebProcessPlugInFrame *frame;
@property (nonatomic, readonly) _Bool isSelectElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

+ (id)nodeHandleWithJSValue:(id)arg1 inContext:(id)arg2;

- (void)dealloc;
- (id)renderedImageWithOptions:(unsigned int)arg1 width:(id)arg2;
- (id)htmlIFrameElementContentFrame;
- (id)renderedImageWithOptions:(unsigned int)arg1;
- (_Bool)isHTMLInputElementAutoFillButtonEnabled;
- (void)setHTMLInputElementAutoFillButtonEnabledWithButtonType:(long long)arg1;
- (long long)htmlInputElementAutoFillButtonType;
- (long long)htmlInputElementLastAutoFillButtonType;
- (_Bool)isTextField;

@end
