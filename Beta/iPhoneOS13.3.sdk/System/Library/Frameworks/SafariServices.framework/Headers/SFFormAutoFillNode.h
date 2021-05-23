/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString, WKWebProcessPlugInNodeHandle;

__attribute__((visibility("hidden")))
@interface SFFormAutoFillNode : NSObject

{
    WKWebProcessPlugInNodeHandle *_nodeHandle;
}

@property (nonatomic, readonly) WKWebProcessPlugInNodeHandle *nodeHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)autoFillNodeWithNodeHandle:(id)arg1;

- (struct CGRect)elementBounds;
- (long long)htmlInputElementAutoFillButtonType;
- (long long)htmlInputElementLastAutoFillButtonType;
- (id)initWithNodeHandle:(id)arg1;
- (id)initWithJSWrapper:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2;
- (void)setHTMLInputElementAutofilled:(_Bool)arg1;
- (_Bool)isHTMLInputElementUserEdited;
- (_Bool)isHTMLTextAreaElementUserEdited;
- (void)setHTMLInputElementAutoFilledWithAutomaticStrongPassword:(_Bool)arg1;

@end
