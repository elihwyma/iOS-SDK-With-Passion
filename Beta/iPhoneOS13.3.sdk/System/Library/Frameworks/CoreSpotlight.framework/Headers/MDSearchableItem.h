/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <CoreSpotlight/CSSearchableItem.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface MDSearchableItem : CSSearchableItem

@property (retain) NSDictionary *attributes;
@property (copy) NSString *displayName;
@property (copy) NSString *secondaryDisplayName;
@property (copy) NSString *contentUTI;
@property (copy) NSURL *contentURL;
@property (copy) NSURL *thumbnailURL;
@property (copy) NSData *thumbnailImageData;
@property (copy, readonly) NSString *localizedDisplayName;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_standardizeDeprecatedProperties:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 domainIdentifier:(id)arg2 attributes:(id)arg3;

@end
