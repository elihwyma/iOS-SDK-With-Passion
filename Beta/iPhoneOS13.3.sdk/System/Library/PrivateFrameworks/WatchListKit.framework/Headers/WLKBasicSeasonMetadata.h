/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <WatchListKit/WLKBasicContentMetadata.h>

@class NSNumber, NSString;

@interface WLKBasicSeasonMetadata : WLKBasicContentMetadata

{
    NSNumber *_seasonNumber;
    NSString *_canonicalShowID;
}

@property (nonatomic, readonly) NSNumber *seasonNumber;
@property (copy, nonatomic, readonly) NSString *canonicalShowID;

+ (id)seasonsWithDictionaries:(id)arg1;

- (id)initWithDictionary:(id)arg1;

@end
