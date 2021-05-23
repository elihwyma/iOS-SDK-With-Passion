/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRadioContentReference.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSNumber;

@interface ICRadioStoreContentReference : ICRadioContentReference <Swift>

{
    NSNumber *_storeIdentifier;
}

@property (copy, nonatomic) NSNumber *storeIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoreIdentifier:(id)arg1;
- (id)matchDictionary;

@end
