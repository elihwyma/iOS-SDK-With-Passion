/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface WLKBasicContentRequestResponse : NSObject

{
    NSArray *_items;
}

@property (copy, nonatomic, readonly) NSArray *items;

- (id)init;
- (id)initWithDictionary:(id)arg1;

@end
