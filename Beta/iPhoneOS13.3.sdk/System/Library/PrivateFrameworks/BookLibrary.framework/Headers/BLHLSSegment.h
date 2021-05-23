/*
 Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

#import <Foundation/NSObject.h>

@class BLHLSKey, BLHLSMap, NSURL;

@interface BLHLSSegment : NSObject

{
    BLHLSMap *_map;
    NSURL *_url;
    double _duration;
    BLHLSKey *_key;
}

@property (nonatomic, readonly) BLHLSMap *map;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) BLHLSKey *key;

- (id)description;
- (id)initWithURL:(id)arg1 duration:(double)arg2 map:(id)arg3 key:(id)arg4;

@end
