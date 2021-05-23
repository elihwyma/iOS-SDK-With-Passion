/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface CNContactRecentsReference : NSObject

{
    NSNumber *_recentContactID;
    NSString *_domain;
}

@property (nonatomic, readonly) NSNumber *recentContactID;
@property (nonatomic, readonly) NSString *domain;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecentContactID:(id)arg1 domain:(id)arg2;

@end
