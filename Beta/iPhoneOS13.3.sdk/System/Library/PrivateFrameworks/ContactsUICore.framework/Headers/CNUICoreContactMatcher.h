/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@interface CNUICoreContactMatcher : NSObject

+ (_Bool)doesNameOfContact:(id)arg1 matchNameOfContact:(id)arg2;
+ (_Bool)doesNameOfContact:(id)arg1 matchNameOfFamilyMember:(id)arg2;
+ (id)nameFromFammilyMember:(id)arg1;
+ (_Bool)doesContact:(id)arg1 matchContact:(id)arg2;
+ (_Bool)doesContact:(id)arg1 matchAnyParentOrGuardianInFamily:(id)arg2;

@end
