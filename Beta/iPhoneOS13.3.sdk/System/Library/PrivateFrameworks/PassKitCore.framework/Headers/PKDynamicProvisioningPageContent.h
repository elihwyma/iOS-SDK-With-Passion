/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSString, PKDynamicProvisioningPageLearnMoreContent;

@interface PKDynamicProvisioningPageContent : NSObject

{
    unsigned char _contentAlignment;
    unsigned long long _pageNumber;
    NSString *_identifier;
    NSString *_title;
    NSString *_subtitle;
    NSString *_body;
    NSString *_primaryActionTitle;
    NSString *_primaryActionIdentifier;
    NSString *_secondaryActionTitle;
    NSString *_secondaryActionIdentifier;
    NSString *_disclosureTitle;
    NSString *_heroImageURL;
    PKDynamicProvisioningPageLearnMoreContent *_learnMore;
}

@property (nonatomic) unsigned long long pageNumber;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *primaryActionTitle;
@property (copy, nonatomic) NSString *primaryActionIdentifier;
@property (copy, nonatomic) NSString *secondaryActionTitle;
@property (copy, nonatomic) NSString *secondaryActionIdentifier;
@property (copy, nonatomic) NSString *disclosureTitle;
@property (retain, nonatomic) NSString *heroImageURL;
@property (retain, nonatomic) PKDynamicProvisioningPageLearnMoreContent *learnMore;
@property (nonatomic) unsigned char contentAlignment;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictonary:(id)arg1;

@end
