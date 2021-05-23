/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class _MRContentItemProtobuf, _MRPlaybackQueueRequestProtobuf;

__attribute__((visibility("hidden")))
@interface MRContentItemRequest : NSObject

{
    _MRContentItemProtobuf *_item;
    _MRPlaybackQueueRequestProtobuf *_request;
}

@property (retain, nonatomic) _MRContentItemProtobuf *item;
@property (retain, nonatomic) _MRPlaybackQueueRequestProtobuf *request;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1 request:(id)arg2;

@end
