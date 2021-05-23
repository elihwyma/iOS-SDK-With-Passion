/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, SFFormAutoFillFrameHandle, WBSFormMetadata;

@protocol _WKFocusedElementInfo, _WKFormInputSession;

@interface _SFFormAutoFillInputSession : NSObject

{
    id <_WKFocusedElementInfo> _focusedElementInfo;
    NSDictionary *_autoFillInputSessionUserObject;
    id <_WKFormInputSession> _formInputSession;
    SFFormAutoFillFrameHandle *_frameHandle;
    WBSFormMetadata *_formMetadata;
}

@property (nonatomic, readonly) id <_WKFocusedElementInfo> focusedElementInfo;
@property (nonatomic, readonly) NSDictionary *autoFillInputSessionUserObject;
@property (nonatomic, readonly) id <_WKFormInputSession> formInputSession;
@property (nonatomic, readonly) SFFormAutoFillFrameHandle *frameHandle;
@property (nonatomic, readonly) WBSFormMetadata *formMetadata;

- (id)_initWithFormInputSession:(id)arg1 focusedElement:(id)arg2;
- (void)_updateAutoFillInputSessionUserObject:(id)arg1;
- (id)initWithFormInputSession:(id)arg1;
- (id)initWithFocusedElement:(id)arg1;
- (id)autoFillInputSessionByReplacingInputSessionUserObject:(id)arg1;

@end
