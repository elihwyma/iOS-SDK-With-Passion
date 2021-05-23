/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class NSString;

@protocol UIDocumentInteractionControllerDelegate;

__attribute__((visibility("hidden")))
@interface QLCustomURLSharingProxyDelegate : NSObject

{
    id <UIDocumentInteractionControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <UIDocumentInteractionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDelegate:(id)arg1;
- (void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1;

@end
