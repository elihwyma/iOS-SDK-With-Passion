/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKBasicContentMetadata.h>

@class NSDate, NSString;

@interface WLKBasicShowMetadata : WLKBasicContentMetadata

{
    NSDate *_releaseDate;
    NSDate *_finaleDate;
    NSString *_network;
}

@property (nonatomic, readonly) NSDate *releaseDate;
@property (nonatomic, readonly) NSDate *finaleDate;
@property (copy, nonatomic, readonly) NSString *network;

- (id)init;
- (id)initWithDictionary:(id)arg1;

@end
