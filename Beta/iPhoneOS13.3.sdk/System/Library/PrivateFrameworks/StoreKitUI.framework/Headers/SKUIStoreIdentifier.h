/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSNumber, NSString;

@interface SKUIStoreIdentifier : NSObject <Swift>

{
    NSNumber *_itemIdentifier;
    NSString *_podcastFeedURLIdentifier;
    NSString *_bundleIdentifier;
}

@property (nonatomic, readonly) NSNumber *itemIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *podcastFeedURLIdentifier;

- (long long)longLongValue;
- (id)initWithLongLong:(long long)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringValue;
- (id)numberValue;
- (id)initWithNumber:(id)arg1;
- (id)initWithPodcastFeedURL:(id)arg1;

@end
