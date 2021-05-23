/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface QLThumbnailProvider : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)provideThumbnailForFileRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
