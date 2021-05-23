/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNUIFamilyMemberDowntimeContactSection : NSObject

{
    NSArray *_contactItems;
    NSString *_title;
}

@property (nonatomic, readonly) NSArray *contactItems;
@property (copy, nonatomic, readonly) NSString *title;

- (id)initWithContactItems:(id)arg1 title:(id)arg2;

@end
