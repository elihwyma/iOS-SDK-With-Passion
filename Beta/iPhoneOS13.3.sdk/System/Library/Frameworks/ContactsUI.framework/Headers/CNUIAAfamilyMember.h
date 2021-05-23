/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNUIAAfamilyMember : NSObject

{
    _Bool _isMe;
    NSString *_appleID;
    NSString *_firstName;
    NSString *_lastName;
}

@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (nonatomic) _Bool isMe;

+ (_Bool)supportsSecureCoding;
+ (id)cnuiFamilyMemberWithAAFamilyMember:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
