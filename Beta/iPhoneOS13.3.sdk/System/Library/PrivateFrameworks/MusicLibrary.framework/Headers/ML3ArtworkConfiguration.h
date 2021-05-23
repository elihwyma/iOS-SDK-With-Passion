/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface ML3ArtworkConfiguration : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDictionary *_artworkConfigurationDictionary;
    NSMutableDictionary *_supportedSizesCache;
    double _mainScreenScale;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSDictionary *artworkConfigurationDictionary;
@property (retain, nonatomic) NSMutableDictionary *supportedSizesCache;
@property (nonatomic) double mainScreenScale;

+ (id)systemConfiguration;

- (id)description;
- (id)initWithConfigurationDictionaries:(id)arg1;
- (id)supportedSizesForMediaType:(unsigned int)arg1 artworkType:(long long)arg2;
- (id)sizesToAutogenerateForMediaType:(unsigned int)arg1 artworkType:(long long)arg2;
- (id)_supportedSizeKeysForMediaType:(unsigned int)arg1 artworkType:(long long)arg2;

@end
