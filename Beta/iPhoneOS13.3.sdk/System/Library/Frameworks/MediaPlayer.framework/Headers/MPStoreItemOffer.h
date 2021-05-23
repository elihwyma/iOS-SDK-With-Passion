/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface MPStoreItemOffer : NSObject <Swift>

{
    NSDictionary *_lookupDictionary;
}

@property (copy, nonatomic, readonly) NSArray *assets;
@property (copy, nonatomic, readonly) NSString *buyParameters;
@property (copy, nonatomic, readonly) NSString *formattedPrice;
@property (copy, nonatomic, readonly) NSString *offerType;
@property (copy, nonatomic, readonly) NSNumber *price;
@property (copy, nonatomic, readonly) NSDictionary *lookupDictionary;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLookupDictionary:(id)arg1;
- (id)actionTextForType:(id)arg1;

@end
