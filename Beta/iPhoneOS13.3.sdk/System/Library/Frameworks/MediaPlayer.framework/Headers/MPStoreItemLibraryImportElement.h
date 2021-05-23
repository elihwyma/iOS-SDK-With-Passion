/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface MPStoreItemLibraryImportElement : NSObject

{
    long long _storeItemID;
    NSDictionary *_additionalTrackMetadata;
}

@property (nonatomic, readonly) long long storeItemID;
@property (nonatomic, readonly) NSDictionary *additionalTrackMetadata;

- (id)initWithStoreItemID:(long long)arg1 additionalTrackMetadata:(id)arg2;
- (id)storeItem;

@end
