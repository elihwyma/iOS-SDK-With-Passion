/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSSet, NSString, NSUUID;

@protocol OS_xpc_object;

@interface CSUserAction : NSObject

{
    NSString *_itemIdentifier;
    NSString *_contentAction;
    NSDictionary *_userInfo;
    NSSet *_keywords;
    unsigned long long _eligibility;
    NSUUID *_uaIdentifier;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *xpc_dictionary;
@property (copy) NSString *itemIdentifier;
@property (copy) NSString *contentAction;
@property (retain) NSDictionary *userInfo;
@property (retain) NSSet *keywords;
@property unsigned long long eligibility;
@property (retain, nonatomic) NSUUID *uaIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)actionFromUserActivity:(id)arg1 searchableItem:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDict:(id)arg1;
- (id)_propertiesDescription;
- (void)encodeWithCSCoder:(id)arg1;

@end
