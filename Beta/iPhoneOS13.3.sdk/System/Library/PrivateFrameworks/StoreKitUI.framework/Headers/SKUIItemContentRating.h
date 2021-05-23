/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SKUIItemContentRating : NSObject

{
    NSArray *_contentRatingAdvisories;
    NSString *_contentRatingName;
    NSString *_contentRatingSystemName;
    NSString *_contentRank;
}

@property (nonatomic, readonly) NSArray *contentRatingAdvisories;
@property (nonatomic, readonly) NSString *contentRatingName;
@property (nonatomic, readonly) NSString *contentRank;
@property (nonatomic, readonly) NSString *contentRatingSystemName;

- (id)description;
- (id)initWithContentRatingDictionary:(id)arg1 systemName:(id)arg2;

@end
