/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@class NSData, NSString;

@protocol FCAssetDataProvider

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, readonly) _Bool isRawFileConsumable;

@end
