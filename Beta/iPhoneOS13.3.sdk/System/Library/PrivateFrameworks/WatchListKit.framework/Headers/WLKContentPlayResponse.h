/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, WLKPlayable;

@interface WLKContentPlayResponse : NSObject

{
    NSDictionary *_dictionary;
    WLKPlayable *_playable;
}

@property (copy, nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) WLKPlayable *playable;

- (id)init;
- (id)initWithDictionary:(id)arg1;

@end
