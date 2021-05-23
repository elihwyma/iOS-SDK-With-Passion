/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSURL;

@interface DCDocument : NSObject

{
    NSURL *_fileURL;
    id _annotation;
}

@property (copy, nonatomic, readonly) NSURL *fileURL;
@property (copy, nonatomic, readonly) id annotation;

+ (id)documentWithURL:(id)arg1;
+ (id)documentWithURL:(id)arg1 annotation:(id)arg2;

- (id)initWithURL:(id)arg1 annotation:(id)arg2;
- (void)openWithAppBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
