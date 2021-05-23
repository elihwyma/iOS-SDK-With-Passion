/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <SearchFoundation/SFCardSectionEngagementFeedback.h>

@interface SFStoreCardSectionEngagementFeedback : SFCardSectionEngagementFeedback

{
    long long _productPageResult;
}

@property (nonatomic) long long productPageResult;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProductPageResult:(long long)arg1;

@end
