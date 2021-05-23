/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIAppDocumentUpdateEvent.h>

#import <VideosUI/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface VUIAppDocumentRefreshEvent : VUIAppDocumentUpdateEvent <Swift>

- (id)dictionaryRepresentation;
- (id)initWithDescriptor:(id)arg1;
- (id)_refreshEventDescriptor;
- (id)initWithRefreshEventDescriptor:(id)arg1;

@end
