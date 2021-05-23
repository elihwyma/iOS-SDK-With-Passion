/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WLKContentRating : NSObject

{
    NSString *_displayName;
    unsigned long long _ratingValue;
    NSString *_contentRatingSystem;
    NSString *_name;
}

@property (copy, nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) unsigned long long ratingValue;
@property (copy, nonatomic, readonly) NSString *contentRatingSystem;
@property (copy, nonatomic, readonly) NSString *name;

- (id)init;
- (id)initWithDictionary:(id)arg1;

@end
