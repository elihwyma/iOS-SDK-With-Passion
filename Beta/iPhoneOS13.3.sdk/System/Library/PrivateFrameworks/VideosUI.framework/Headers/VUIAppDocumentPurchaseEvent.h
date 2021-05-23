/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIAppDocumentUpdateEvent.h>

#import <VideosUI/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentPurchaseEvent : VUIAppDocumentUpdateEvent <Swift>

{
    NSString *_canonicalID;
}

@property (copy, nonatomic) NSString *canonicalID;

- (id)dictionaryRepresentation;
- (id)initWithDescriptor:(id)arg1;
- (id)_purchaseEventDescriptor;
- (id)initWithPurchaseEventDescriptor:(id)arg1;

@end
