/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSArray, NSData, NSDate, NSString, NSURL;

@interface CPLMomentShare : NSObject

{
    short _mode;
    NSString *_identifier;
    NSString *_title;
    NSDate *_creationDate;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDate *_expiryDate;
    long long _assetCount;
    long long _photosCount;
    long long _videosCount;
    NSData *_thumbnailImageData;
    NSData *_previewData;
    NSArray *_participants;
    NSURL *_shareURL;
    NSString *_originatingScopeIdentifier;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) short mode;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSDate *expiryDate;
@property (nonatomic) long long assetCount;
@property (nonatomic) long long photosCount;
@property (nonatomic) long long videosCount;
@property (copy, nonatomic) NSData *thumbnailImageData;
@property (copy, nonatomic) NSData *previewData;
@property (copy, nonatomic) NSArray *participants;
@property (copy, nonatomic) NSURL *shareURL;
@property (copy, nonatomic) NSString *originatingScopeIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)cplAdditionalSecureClassesForProperty:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
