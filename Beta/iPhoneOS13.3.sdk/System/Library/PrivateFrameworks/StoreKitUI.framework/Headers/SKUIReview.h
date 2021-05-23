/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SKUIReview : NSObject <Swift>

{
    NSString *_body;
    NSString *_dateString;
    float _rating;
    NSString *_reviewer;
    NSString *_title;
}

@property (nonatomic, readonly) NSString *body;
@property (nonatomic, readonly) NSString *dateString;
@property (nonatomic, readonly) float rating;
@property (nonatomic, readonly) NSString *reviewer;
@property (nonatomic, readonly) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSMutableDictionary *cacheRepresentation;

- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithReviewDictionary:(id)arg1;
- (id)formattedBylineWithClientContext:(id)arg1;

@end
