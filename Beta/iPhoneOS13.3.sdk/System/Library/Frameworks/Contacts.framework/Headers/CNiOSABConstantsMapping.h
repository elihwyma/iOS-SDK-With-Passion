/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CNiOSABConstantsMapping : NSObject

{
    NSDictionary *_mapping;
    id _defaultConstant;
}

@property (retain, nonatomic) NSDictionary *mapping;
@property (retain, nonatomic) id defaultConstant;

+ (id)CNToABSourceTypeConstantsMapping;
+ (id)ABToCNContainerTypeConstantsMapping;
+ (id)ABtoCNContactDisplayNameOrderConstantsMapping;
+ (id)CNToABCompositeNameFormatConstantsMapping;
+ (id)ABToCNContactSortOrderConstantsMapping;
+ (id)CNToABPersonShortNameFormatConstantsMapping;
+ (id)ABToCNContactShortNameFormatConstantsMapping;
+ (id)ABToCNLabelConstantsMapping;
+ (id)CNToABLabelConstantsMapping;
+ (id)ABToCNPersonInstantMessageConstantsMapping;
+ (id)CNToABPersonInstantMessageConstantsMapping;
+ (id)ABToCNPersonSocialProfileConstantsMapping;
+ (id)CNToABPersonSocialProfileConstantsMapping;
+ (id)CNToABPersonSortOrderingConstantsMapping;
+ (id)ABToCNPersonKindConstantsMapping;
+ (id)ABToCNPersonAddressConstantsMapping;
+ (id)CNToABPersonKindConstantsMapping;
+ (id)CNToABPersonAddressConstantsMapping;

- (id)mappedConstant:(id)arg1;
- (id)initWithMapping:(id)arg1;
- (id)invertedMapping;

@end
