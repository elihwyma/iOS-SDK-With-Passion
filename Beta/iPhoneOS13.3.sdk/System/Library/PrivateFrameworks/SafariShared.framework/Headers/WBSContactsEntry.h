/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class CNContact;

@interface WBSContactsEntry : NSObject

{
    CNContact *_contact;
}

@property (nonatomic, readonly) CNContact *contact;

+ (_Bool)_isContactsProperty:(id)arg1;
+ (_Bool)_isContactsLabel:(id)arg1;
+ (_Bool)isWBSProxyProperty:(id)arg1;
+ (id)_valueStringForValue:(id)arg1 wbsProperty:(id)arg2 wbsComponent:(id)arg3 atIndex:(unsigned long long)arg4;
+ (id)_valueStringForValue:(id)arg1 wbsProperty:(id)arg2 wbsComponent:(id)arg3;
+ (id)_valueStringForWBSComponent:(id)arg1 inAddress:(id)arg2;
+ (_Bool)_isValueAStringForContactsProperty:(id)arg1;
+ (id)_valueStringForWBSComponent:(id)arg1 inInstantMessageAddress:(id)arg2;
+ (id)localizedWBSPropertyOrLabel:(id)arg1;

- (id)fullName;
- (id)initWithContact:(id)arg1;
- (unsigned long long)_numberOfValuesForWBSProperty:(id)arg1;
- (id)valueForWBSProxyProperty:(id)arg1;
- (unsigned long long)_numberOfValuesForWBSProperty:(id)arg1 andContact:(id)arg2;
- (id)valueStringForWBSProperty:(id)arg1 wbsComponent:(id)arg2 atIndex:(unsigned long long)arg3;

@end
