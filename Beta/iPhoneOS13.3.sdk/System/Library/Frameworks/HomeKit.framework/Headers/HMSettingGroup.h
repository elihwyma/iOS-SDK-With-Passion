/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSString, NSUUID;

@interface HMSettingGroup : NSObject <Swift>

{
    NSString *_keyPath;
    NSUUID *_identifier;
    NSString *_name;
    NSMutableArray *_internalSettings;
    NSMutableArray *_internalGroups;
}

@property (copy, readonly) NSUUID *identifier;
@property (copy) NSString *keyPath;
@property (copy, readonly) NSString *name;
@property (retain) NSMutableArray *internalSettings;
@property (retain) NSMutableArray *internalGroups;
@property (copy, readonly) NSString *localizedTitle;
@property (copy, readonly) NSArray *settings;
@property (copy, readonly) NSArray *groups;

+ (_Bool)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)merge:(id)arg1;
- (void)addGroup:(id)arg1;
- (void)addSetting:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 groups:(id)arg3 settings:(id)arg4;

@end
