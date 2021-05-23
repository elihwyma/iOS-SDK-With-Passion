/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSDictionary;

@interface ICRadioContentReference : NSObject <Swift>

@property (nonatomic, readonly) long long contentType;
@property (copy, nonatomic, readonly) NSDictionary *matchDictionary;

+ (_Bool)supportsSecureCoding;
+ (id)storeItemWithIdentifier:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
