/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@interface CNMeCardSharingDataSource : NSObject

{
    unsigned long long _meCardSharingStatus;
}

@property (nonatomic) unsigned long long meCardSharingStatus;

+ (id)localizedStringForMeCardSharingStatus:(unsigned long long)arg1;

- (id)init;
- (id)localizedStringForMeCardSharingStatus;

@end
