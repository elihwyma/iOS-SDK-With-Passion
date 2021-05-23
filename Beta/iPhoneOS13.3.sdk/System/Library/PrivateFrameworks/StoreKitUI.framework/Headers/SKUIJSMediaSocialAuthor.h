/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, SKUIMediaSocialAuthor;

__attribute__((visibility("hidden")))
@interface SKUIJSMediaSocialAuthor : NSObject

{
    SKUIMediaSocialAuthor *_mediaSocialAuthor;
}

@property (nonatomic, readonly) NSString *dsId;
@property (nonatomic, readonly) NSString *entityIdentifier;
@property (nonatomic, readonly) NSString *entityType;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *permissions;
@property (nonatomic, readonly) NSDictionary *storePlatformData;

- (id)initWithSKUIMediaSocialAuthor:(id)arg1;

@end
