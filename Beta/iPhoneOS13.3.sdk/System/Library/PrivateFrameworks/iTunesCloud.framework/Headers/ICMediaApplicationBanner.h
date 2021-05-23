/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSDate, NSDictionary, NSString;

@interface ICMediaApplicationBanner : NSObject <Swift>

{
    NSString *_guid;
    NSString *_bundleIdentifier;
    NSString *_target;
    NSDictionary *_rawPayload;
    NSDate *_displayWindowStartTime;
    NSDate *_displayWindowEndTime;
    int _maxDisplayCount;
    int _displayCount;
    NSString *_setID;
    _Bool _hasBeenTapped;
}

@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *target;
@property (nonatomic, readonly) NSDictionary *rawPayload;
@property (nonatomic, readonly) NSDate *displayWindowStartTime;
@property (nonatomic, readonly) NSDate *displayWindowEndTime;
@property (nonatomic, readonly) int maxDisplayCount;
@property (nonatomic, readonly) int displayCount;
@property (nonatomic, readonly) NSString *setID;
@property (nonatomic, readonly) _Bool hasBeenTapped;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToBanner:(id)arg1;

@end
