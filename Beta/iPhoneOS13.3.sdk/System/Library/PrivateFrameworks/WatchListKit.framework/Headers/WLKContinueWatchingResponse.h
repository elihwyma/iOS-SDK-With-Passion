/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSArray, WLKContinueWatchingCollection;

@interface WLKContinueWatchingResponse : NSObject

{
    NSArray *_items;
    WLKContinueWatchingCollection *_featured;
}

@property (copy, nonatomic, readonly) NSArray *items;
@property (copy, nonatomic, readonly) WLKContinueWatchingCollection *featured;

- (id)init;
- (id)initWithDictionary:(id)arg1;

@end
