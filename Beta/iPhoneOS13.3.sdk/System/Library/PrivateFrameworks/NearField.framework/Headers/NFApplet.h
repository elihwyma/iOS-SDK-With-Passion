/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSString;

@protocol NFAppletCollection;

@interface NFApplet : NSObject

{
    NSString *_groupHeadID;
    NSArray *_groupMemberIDs;
    NSArray *_referencedAppIDs;
    _Bool _isContainer;
    _Bool _isProxy;
    NSString *_packageIdentifier;
    NSString *_moduleIdentifier;
    NSArray *_multiSEApplicationGroupMemberIDs;
    unsigned char _appletGPState;
    unsigned char _groupActivationStyle;
    NSObject<NFAppletCollection> *_appletCollection;
    NSData *_typeFSystemCode;
    unsigned char _family;
    unsigned char _activationState;
    _Bool _authTransientSupport;
    _Bool _authTransientConfigurable;
    NSString *_identifier;
    NSString *_seIdentifier;
    NSData *_identifierAsData;
    NSData *_discretionaryData;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *seIdentifier;
@property (nonatomic, readonly) NSData *identifierAsData;
@property (nonatomic, readonly) NSData *discretionaryData;
@property (nonatomic, readonly) unsigned char family;
@property (nonatomic, readonly) unsigned char lifecycleState;
@property (nonatomic, readonly) unsigned char activationState;
@property (nonatomic, readonly) _Bool authTransientSupport;
@property (nonatomic, readonly) NFApplet *groupHead;
@property (nonatomic, readonly) NSArray *groupMembers;
@property (nonatomic, readonly) NSArray *referencedApps;
@property (nonatomic, readonly) _Bool authTransientConfigurable;
@property (nonatomic, readonly) _Bool isTypeF;
@property (nonatomic, readonly) unsigned char supportedTypeFSystem;
@property (nonatomic, readonly) _Bool isGPLocked;

+ (_Bool)supportsSecureCoding;

- (_Bool)isProxy;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isContainer;
- (id)groupMemberIDs;
- (id)multiSEGroupMemberIDs;
- (id)groupHeadID;
- (void)setAppletCollection:(id)arg1;
- (id)asDictionary;
- (_Bool)isEqualToApplet:(id)arg1;
- (void)_setIsActive:(_Bool)arg1;
- (id)packageIdentifier;
- (id)moduleIdentifier;
- (unsigned char)groupActivationStyle;
- (id)appletCollection;
- (id)multiSSDMembers;
- (_Bool)isPPSEControllable;
- (unsigned long long)rawGPState;

@end
