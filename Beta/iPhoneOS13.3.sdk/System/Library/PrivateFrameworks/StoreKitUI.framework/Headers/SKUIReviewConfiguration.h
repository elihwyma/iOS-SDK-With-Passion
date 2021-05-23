/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUIReviewConfiguration : NSObject

{
    NSString *_allVersionsURLString;
    NSString *_currentVersionURLString;
    NSString *_pageNumberQueryParameter;
    NSString *_ratingURLString;
}

@property (nonatomic, readonly) NSString *allVersionsURLString;
@property (nonatomic, readonly) NSString *currentVersionURLString;
@property (nonatomic, readonly) NSString *pageNumberQueryParameter;
@property (nonatomic, readonly) NSString *ratingURLString;

- (id)initWithConfigurationDictionary:(id)arg1;

@end
