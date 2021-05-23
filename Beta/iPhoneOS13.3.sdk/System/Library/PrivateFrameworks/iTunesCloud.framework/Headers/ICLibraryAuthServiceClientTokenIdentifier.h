/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSNumber, NSString;

@interface ICLibraryAuthServiceClientTokenIdentifier : NSObject <Swift>

{
    NSNumber *_DSID;
    NSString *_deviceGUID;
}

@property (copy, nonatomic, readonly) NSNumber *DSID;
@property (copy, nonatomic, readonly) NSString *deviceGUID;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseDictionary:(id)arg1;

@end
