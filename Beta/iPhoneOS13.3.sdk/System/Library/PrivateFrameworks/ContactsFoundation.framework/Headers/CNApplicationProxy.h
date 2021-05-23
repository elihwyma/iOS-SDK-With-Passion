/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CNApplicationProxy : NSObject

{
    NSString *_applicationIdentifier;
    NSString *_teamIdentifier;
    NSString *_localizedName;
    NSArray *_activityTypes;
}

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *teamIdentifier;
@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) NSArray *activityTypes;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithApplicationIdentifier:(id)arg1 teamIdentifier:(id)arg2 localizedName:(id)arg3 activityTypes:(id)arg4;
- (id)initWithLSApplicationProxy:(id)arg1;

@end
