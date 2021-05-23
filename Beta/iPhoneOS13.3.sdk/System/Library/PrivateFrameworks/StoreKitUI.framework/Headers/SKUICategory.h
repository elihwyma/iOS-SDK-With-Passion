/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL;

@protocol SKUIArtworkProviding;

@interface SKUICategory : NSObject

{
    long long _categoryIdentifier;
    NSArray *_children;
    NSString *_name;
    NSString *_parentLabel;
    NSURL *_url;
    id <SKUIArtworkProviding> _artworkProvider;
}

@property (nonatomic, readonly) id <SKUIArtworkProviding> artworkProvider;
@property (nonatomic, readonly) long long categoryIdentifier;
@property (nonatomic, readonly) NSArray *children;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *parentLabel;

- (_Bool)containsURL:(id)arg1;
- (id)initWithCategoryDictionary:(id)arg1;
- (id)subcategoryContainingURL:(id)arg1;

@end
