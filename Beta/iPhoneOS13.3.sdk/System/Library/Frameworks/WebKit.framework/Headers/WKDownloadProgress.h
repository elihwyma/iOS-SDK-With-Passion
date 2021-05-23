/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSProgress.h>

__attribute__((visibility("hidden")))
@interface WKDownloadProgress : NSProgress

{
    struct RetainPtr<NSURLSessionDownloadTask> m_task;
    struct WeakPtr<WebKit::Download> m_download;
    RefPtr_ea257445 m_sandboxExtension;
}

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)publish;
- (void)unpublish;
- (id).cxx_construct;
- (id)initWithDownloadTask:(id)arg1 download:(struct Download *)arg2 URL:(id)arg3 sandboxExtension:(RefPtr_ea257445)arg4;
- (void)performCancel;

@end
