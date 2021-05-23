/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface WLKSiriBestPlayablesResponse : NSObject

{
    NSDictionary *_dictionary;
    NSDictionary *_playablesByID;
}

@property (copy, nonatomic) NSDictionary *playablesByID;
@property (copy, nonatomic, readonly) NSDictionary *dictionary;

- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)playableForStatsID:(id)arg1;

@end
