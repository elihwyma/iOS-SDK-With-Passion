/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@interface GEOAnalyticsHandlingInfo : NSObject <Swift>

{
    long long _logMsgType;
    long long _persistCount;
    long long _uploadSuccessCount;
    long long _uploadSuccessByteCount;
    long long _uploadFailureCount;
    long long _dbExpireCount;
}

@property (nonatomic) long long logMsgType;
@property (nonatomic) long long persistCount;
@property (nonatomic) long long uploadSuccessCount;
@property (nonatomic) long long uploadSuccessByteCount;
@property (nonatomic) long long uploadFailureCount;
@property (nonatomic) long long dbExpireCount;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
