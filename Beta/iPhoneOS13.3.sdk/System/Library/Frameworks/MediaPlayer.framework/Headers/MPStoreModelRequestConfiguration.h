/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSURLRequest;

@interface MPStoreModelRequestConfiguration : NSObject

{
    NSArray *_URLRequests;
    NSArray *_requestedItemIdentifiers;
    unsigned long long _itemMetadataRequestReason;
    long long _type;
}

@property (copy, nonatomic, readonly) NSURLRequest *URLRequest;
@property (copy, nonatomic, readonly) NSArray *URLRequests;
@property (nonatomic, readonly) NSArray *requestedItemIdentifiers;
@property (nonatomic, readonly) unsigned long long itemMetadataRequestReason;
@property (nonatomic, readonly) long long type;

- (id)initWithURLRequest:(id)arg1;
- (id)initWithURLRequests:(id)arg1;
- (id)initWithRequestedItemIdentifiers:(id)arg1 reason:(unsigned long long)arg2;

@end
