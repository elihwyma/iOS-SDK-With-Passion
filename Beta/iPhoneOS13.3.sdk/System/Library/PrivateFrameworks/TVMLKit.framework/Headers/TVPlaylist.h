/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface TVPlaylist : NSObject

{
    NSArray *_mediaItems;
    long long _endAction;
    long long _repeatMode;
    NSDictionary *_userInfo;
}

@property (nonatomic) long long endAction;
@property (nonatomic) long long repeatMode;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic, readonly) NSArray *mediaItems;

- (void)addObject:(id)arg1;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;

@end
