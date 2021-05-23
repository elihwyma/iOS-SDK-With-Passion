/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/TVViewElement.h>

@class IKAssetElement, NSNumber, NSString, NSURL;

@interface TVAssetElement : TVViewElement

@property (nonatomic, readonly) IKAssetElement *assetElement;
@property (nonatomic, readonly) NSString *actionParams;
@property (nonatomic, readonly) NSString *adamID;
@property (nonatomic, readonly) NSURL *extrasURL;
@property (nonatomic, readonly) unsigned long long keyDelivery;
@property (nonatomic, readonly) NSNumber *persistentID;
@property (nonatomic, readonly) NSNumber *rentalAdamID;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSURL *url;

- (_Bool)isEqual:(id)arg1;

@end
