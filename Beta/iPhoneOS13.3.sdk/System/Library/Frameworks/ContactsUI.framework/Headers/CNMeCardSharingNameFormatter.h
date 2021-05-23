/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSPersonNameComponents;

@protocol CNMeCardSharingNameProvider;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingNameFormatter : NSObject

{
    id <CNMeCardSharingNameProvider> _nameProvider;
    NSPersonNameComponents *_nameComponents;
    NSMutableDictionary *_cachedFormattedNames;
}

@property (nonatomic, readonly) id <CNMeCardSharingNameProvider> nameProvider;
@property (nonatomic, readonly) NSPersonNameComponents *nameComponents;
@property (retain, nonatomic) NSMutableDictionary *cachedFormattedNames;

+ (id)formattedNameFromComponents:(id)arg1 forProvider:(id)arg2 withFormat:(unsigned long long)arg3;
+ (id)nameComponentsFromProvider:(id)arg1;
+ (id)formattedNameFromProvider:(id)arg1 withFormat:(unsigned long long)arg2;

- (id)initWithNameProvider:(id)arg1;
- (id)formattedNameWithFormat:(unsigned long long)arg1;

@end
