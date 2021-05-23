/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSString;

@interface SKUIMediaPlayerItemStatus : NSObject <Swift>

{
    NSString *_itemIdentifier;
    NSString *_storeID;
    NSString *_storeAlbumID;
    _Bool _hideDuration;
    double _currentTime;
    double _duration;
    long long _itemType;
    long long _playState;
}

@property (nonatomic) double currentTime;
@property (nonatomic) double duration;
@property (nonatomic) _Bool hideDuration;
@property (copy, nonatomic) NSString *itemIdentifier;
@property (nonatomic) long long itemType;
@property (nonatomic) long long playState;
@property (copy, nonatomic) NSString *storeID;
@property (copy, nonatomic) NSString *storeAlbumID;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
