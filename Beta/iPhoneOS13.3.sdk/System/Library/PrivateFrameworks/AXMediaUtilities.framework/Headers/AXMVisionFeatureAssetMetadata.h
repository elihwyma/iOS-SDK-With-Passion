/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSURL;

@interface AXMVisionFeatureAssetMetadata : NSObject

{
    NSString *_name;
    NSDate *_creationDate;
    NSString *_uti;
    NSString *_localizedTypeDescription;
    NSString *_TIFFImageDescription;
    NSString *_IPTCCaptionAbstract;
    NSString *_EXIFUserComment;
    NSString *_PNGImageDescription;
    NSURL *_assetURL;
}

@property (retain, nonatomic) NSURL *assetURL;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSString *uti;
@property (retain, nonatomic) NSString *localizedTypeDescription;
@property (retain, nonatomic) NSString *TIFFImageDescription;
@property (retain, nonatomic) NSString *IPTCCaptionAbstract;
@property (retain, nonatomic) NSString *EXIFUserComment;
@property (retain, nonatomic) NSString *PNGImageDescription;
@property (nonatomic, readonly) NSURL *url;

+ (_Bool)supportsSecureCoding;
+ (id)assetMetadataFromURL:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
