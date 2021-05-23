/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CNVCardConstantsMapping : NSObject

{
    NSDictionary *_mapping;
}

@property (retain, nonatomic) NSDictionary *mapping;

+ (id)vCardToCNSocialProfileConstantsMapping;
+ (id)vCardToCNInstantMessageConstantsMapping;
+ (id)CNToVCardSocialProfileConstantsMapping;
+ (id)CNToVCardInstantMessageConstantsMapping;

- (id)mappedConstant:(id)arg1;
- (id)initWithMapping:(id)arg1;
- (id)invertedMapping;

@end
