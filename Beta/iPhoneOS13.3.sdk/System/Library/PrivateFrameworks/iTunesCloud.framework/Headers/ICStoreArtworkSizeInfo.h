/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSArray;

@interface ICStoreArtworkSizeInfo : NSObject

{
    _Bool _hasMaxSupportedSize;
    long long _type;
    NSArray *_supportedSizes;
    struct CGSize _maxSupportedSize;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *supportedSizes;
@property (nonatomic) _Bool hasMaxSupportedSize;
@property (nonatomic) struct CGSize maxSupportedSize;

@end
