/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class _WKFrameHandle;

__attribute__((visibility("hidden")))
@interface SFPrintQueueItem : NSObject

{
    _Bool _completed;
    CDUnknownBlockType _completionHandler;
    _Bool _initiatedByWebContent;
    _WKFrameHandle *_frameHandle;
}

@property (nonatomic, readonly) _WKFrameHandle *frameHandle;
@property (nonatomic, readonly) _Bool initiatedByWebContent;

- (void)dealloc;
- (void)completeWithResult:(long long)arg1;
- (id)initWithFrameHandle:(id)arg1 initiatedByWebContent:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
