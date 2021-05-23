/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class AVMetadataItem, NSDictionary, NSString;

@interface MPTimedMetadata : NSObject

{
    AVMetadataItem *_metadataItem;
}

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSString *keyspace;
@property (nonatomic, readonly) id value;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) NSDictionary *allMetadata;

- (id)init;
- (id)_initWithMetadataItem:(id)arg1;

@end
