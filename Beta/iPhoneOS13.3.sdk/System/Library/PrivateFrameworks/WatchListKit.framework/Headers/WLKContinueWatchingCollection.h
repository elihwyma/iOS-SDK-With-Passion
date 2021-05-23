/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface WLKContinueWatchingCollection : NSObject

{
    NSString *_collectionID;
    NSString *_title;
    NSArray *_items;
}

@property (copy, nonatomic, readonly) NSString *collectionID;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSArray *items;

- (id)init;
- (id)initWithDictionary:(id)arg1;

@end
