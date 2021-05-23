/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface MPStoreRedownloadProductItemAsset : NSObject

{
    NSDictionary *_responseDictionary;
}

@property (copy, nonatomic, readonly) NSString *downloadKey;
@property (copy, nonatomic, readonly) NSString *flavor;
@property (copy, nonatomic, readonly) NSDictionary *responseDictionary;
@property (copy, nonatomic, readonly) NSArray *sinfs;
@property (copy, nonatomic, readonly) NSURL *URL;

- (id)initWithResponseDictionary:(id)arg1;

@end
