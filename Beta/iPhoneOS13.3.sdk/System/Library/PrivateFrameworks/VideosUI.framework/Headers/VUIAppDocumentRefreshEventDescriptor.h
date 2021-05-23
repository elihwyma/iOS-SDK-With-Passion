/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIAppDocumentUpdateEventDescriptor.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentRefreshEventDescriptor : VUIAppDocumentUpdateEventDescriptor

{
    unsigned long long _delayInSeconds;
    NSString *_name;
}

@property (nonatomic) unsigned long long delayInSeconds;
@property (copy, nonatomic) NSString *name;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEventType:(unsigned long long)arg1;
- (id)initWithDelayInSeconds:(unsigned long long)arg1 name:(id)arg2;

@end
