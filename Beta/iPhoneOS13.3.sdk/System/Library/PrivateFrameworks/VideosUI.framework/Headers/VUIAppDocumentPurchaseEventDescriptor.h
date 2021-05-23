/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIAppDocumentUpdateEventDescriptor.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentPurchaseEventDescriptor : VUIAppDocumentUpdateEventDescriptor

{
    NSString *_canonicalID;
}

@property (copy, nonatomic) NSString *canonicalID;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEventType:(unsigned long long)arg1;
- (id)initWithCanonicalID:(id)arg1;

@end
