/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface MPStoreItemOfferAsset : NSObject

{
    NSDictionary *_lookupDictionary;
}

@property (copy, nonatomic, readonly) NSDictionary *lookupDictionary;
@property (nonatomic, readonly) double duration;
@property (copy, nonatomic, readonly) NSString *flavor;
@property (nonatomic, readonly) double previewDuration;
@property (copy, nonatomic, readonly) NSURL *previewURL;
@property (nonatomic, readonly) long long size;

- (id)initWithLookupDictionary:(id)arg1;

@end
