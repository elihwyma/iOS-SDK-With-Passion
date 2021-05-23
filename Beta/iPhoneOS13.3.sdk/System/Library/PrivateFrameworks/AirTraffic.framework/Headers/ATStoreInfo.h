/*
 Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <Foundation/NSObject.h>

@class ICStoreMediaResponseItem, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface ATStoreInfo : NSObject

{
    NSMutableDictionary *_downloadDictionary;
    NSMutableDictionary *_assetDictionary;
    ICStoreMediaResponseItem *_storeMediaResponseItem;
}

@property (retain, nonatomic) NSNumber *adamID;
@property (retain, nonatomic) NSNumber *DSID;
@property (retain, nonatomic) NSNumber *cloudDSID;
@property (retain, nonatomic) NSNumber *collectionID;
@property (retain, nonatomic) NSNumber *versionID;
@property (retain, nonatomic) NSNumber *drmFree;
@property (retain, nonatomic) NSNumber *sagaID;
@property (retain, nonatomic) NSNumber *subscriptionID;
@property (retain, nonatomic) NSNumber *matchStatus;
@property (retain, nonatomic) NSNumber *redownloadStatus;
@property (retain, nonatomic) NSString *appleID;
@property (retain, nonatomic) NSString *syncID;
@property (retain, nonatomic) NSString *storefrontID;
@property (retain, nonatomic) NSString *XID;
@property (retain, nonatomic) NSString *flavor;
@property (retain, nonatomic) NSString *dimensions;
@property (retain, nonatomic) NSString *podcastEpisodeGUID;
@property (retain, nonatomic) NSString *redownloadParams;
@property (retain, nonatomic) NSNumber *endpointType;
@property (retain, nonatomic) ICStoreMediaResponseItem *storeMediaResponseItem;
@property (readonly) NSDictionary *downloadDictionary;
@property (readonly) NSDictionary *assetDictionary;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
