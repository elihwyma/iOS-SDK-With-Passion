/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface WLKSiriSearchResponse : NSObject

{
    NSDictionary *_dictionary;
    NSArray *_items;
}

@property (copy, nonatomic, readonly) NSDictionary *dictionary;
@property (copy, nonatomic, readonly) NSArray *items;

- (id)init;
- (id)initWithDictionary:(id)arg1;

@end
