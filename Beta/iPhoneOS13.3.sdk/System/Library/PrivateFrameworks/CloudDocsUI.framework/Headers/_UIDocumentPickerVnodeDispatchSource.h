/*
 Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

#import <Foundation/NSObject.h>

@class NSURL;

@protocol OS_dispatch_source, _UIDocumentPickerVnodeDispatchSourceDelegate;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerVnodeDispatchSource : NSObject

{
    NSObject<OS_dispatch_source> *_source;
    id <_UIDocumentPickerVnodeDispatchSourceDelegate> _target;
    NSURL *_url;
}

@property (nonatomic, readonly) NSURL *url;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invalidate;
- (void)event;
- (id)initWithTarget:(id)arg1 url:(id)arg2 queue:(id)arg3;

@end
