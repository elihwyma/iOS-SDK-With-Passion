/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/Swift-Protocol.h>

@class IKUpdateServiceRequest;

@protocol VUIAppDocumentUpdateContext <Swift>

@property (nonatomic, readonly) IKUpdateServiceRequest *currentUpdateRequest;

- (unsigned short)updateRequestCompletedWithViewElements:documentRef: /* Error: Ran out of types for this method. */;
- (unsigned short)updateCurrentUpdateRequestWithAppContext:documentRef: /* Error: Ran out of types for this method. */;

@end
