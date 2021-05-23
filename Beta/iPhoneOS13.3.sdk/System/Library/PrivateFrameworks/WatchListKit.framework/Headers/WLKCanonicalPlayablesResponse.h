/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface WLKCanonicalPlayablesResponse : NSObject

{
    _Bool _watchListable;
    _Bool _watchListed;
    NSDictionary *_dictionary;
    NSString *_canonicalID;
    unsigned long long _contentType;
    NSArray *_playables;
}

@property (copy, nonatomic, readonly) NSDictionary *dictionary;
@property (copy, nonatomic, readonly) NSString *canonicalID;
@property (nonatomic, readonly) unsigned long long contentType;
@property (nonatomic, readonly, getter=isWatchListable) _Bool watchListable;
@property (nonatomic, readonly, getter=isWatchListed) _Bool watchListed;
@property (nonatomic, readonly) NSArray *playables;

- (id)init;
- (id)initWithDictionary:(id)arg1;

@end
