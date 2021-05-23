/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/SFCardSectionEngagementFeedback.h>

@class NSData;

@interface SFMapCardSectionEngagementFeedback : SFCardSectionEngagementFeedback

{
    NSData *_modifiedPlacemarkData;
}

@property (retain, nonatomic) NSData *modifiedPlacemarkData;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
