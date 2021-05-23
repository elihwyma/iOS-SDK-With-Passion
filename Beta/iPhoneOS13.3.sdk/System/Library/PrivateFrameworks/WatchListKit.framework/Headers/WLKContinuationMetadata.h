/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString, NSURL, WLKBasicContentMetadata, WLKPlayable;

@interface WLKContinuationMetadata : NSObject

{
    _Bool _isRental;
    _Bool _isPurchase;
    WLKPlayable *_playable;
    WLKBasicContentMetadata *_movieOrShowContent;
    NSURL *_contentTVAppDeeplinkURL;
    long long _contextEnum;
    NSString *_context;
    NSString *_localizedContext;
    NSString *_deleteID;
    NSNumber *_siriActionsExpirationEpochMillis;
    NSArray *_siriActionsCategories;
}

@property (nonatomic, readonly) WLKPlayable *playable;
@property (nonatomic, readonly) WLKBasicContentMetadata *movieOrShowContent;
@property (nonatomic, readonly) NSURL *contentTVAppDeeplinkURL;
@property (nonatomic, readonly) long long contextEnum;
@property (copy, nonatomic, readonly) NSString *context;
@property (copy, nonatomic, readonly) NSString *localizedContext;
@property (nonatomic, readonly) _Bool isRental;
@property (nonatomic, readonly) _Bool isPurchase;
@property (copy, nonatomic, readonly) NSString *deleteID;
@property (copy, nonatomic, readonly) NSNumber *siriActionsExpirationEpochMillis;
@property (copy, nonatomic, readonly) NSArray *siriActionsCategories;

+ (long long)_contextForString:(id)arg1;

- (id)init;
- (id)description;
- (id)initWithDictionary:(id)arg1 context:(id)arg2;

@end
