/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface CNContactRelationsDescriptionLabels : NSObject

{
    NSArray *_preferredLanguages;
    NSArray *_standardLabels;
    NSArray *_standardLocaleSpecificLabels;
    NSArray *_extendedLabels;
    NSArray *_extendedLocaleSpecificLabels;
    NSDictionary *_localizedStringsByLabelKey;
}

@property (nonatomic, readonly) NSArray *preferredLanguages;
@property (nonatomic, readonly) NSArray *standardLabels;
@property (nonatomic, readonly) NSArray *standardLocaleSpecificLabels;
@property (nonatomic, readonly) NSArray *extendedLabels;
@property (nonatomic, readonly) NSArray *extendedLocaleSpecificLabels;
@property (nonatomic, readonly) NSDictionary *localizedStringsByLabelKey;

- (id)initWithPreferredLanguages:(id)arg1 standardLabels:(id)arg2 standardLocaleSpecificLabels:(id)arg3 extendedLabels:(id)arg4 extendedLocaleSpecificLabels:(id)arg5 localizedStringsByLabelKey:(id)arg6;

@end
