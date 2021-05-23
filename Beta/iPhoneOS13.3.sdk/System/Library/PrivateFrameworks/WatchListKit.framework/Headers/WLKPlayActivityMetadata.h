/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface WLKPlayActivityMetadata : NSObject

{
    NSString *_key;
    unsigned long long _contentType;
    NSString *_externalShowID;
    NSString *_canonicalID;
    NSString *_canonicalShowID;
    NSString *_internalLegID;
    NSString *_overrideChannelID;
    NSArray *_siriActionsCategories;
    NSNumber *_isCurrentEpisode;
    NSNumber *_isShowClosed;
}

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) unsigned long long contentType;
@property (nonatomic, readonly) NSString *externalShowID;
@property (nonatomic, readonly) NSString *canonicalID;
@property (nonatomic, readonly) NSString *canonicalShowID;
@property (nonatomic, readonly) NSString *internalLegID;
@property (nonatomic, readonly) NSString *overrideChannelID;
@property (copy, nonatomic, readonly) NSArray *siriActionsCategories;
@property (copy, nonatomic, readonly) NSNumber *isCurrentEpisode;
@property (copy, nonatomic, readonly) NSNumber *isShowClosed;

- (id)initWithKey:(id)arg1 dictionary:(id)arg2;

@end
