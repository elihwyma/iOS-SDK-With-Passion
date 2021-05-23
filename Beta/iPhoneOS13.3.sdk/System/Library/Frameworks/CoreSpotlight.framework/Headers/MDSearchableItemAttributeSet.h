/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <CoreSpotlight/CSSearchableItemAttributeSet.h>

@class NSArray;

@interface MDSearchableItemAttributeSet : CSSearchableItemAttributeSet

@property (copy) NSArray *authorPersons;
@property (copy) NSArray *primaryRecipientPersons;
@property (copy) NSArray *recipients;

+ (_Bool)supportsSecureCoding;

@end
