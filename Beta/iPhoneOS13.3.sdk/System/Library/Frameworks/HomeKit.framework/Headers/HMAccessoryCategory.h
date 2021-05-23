/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class NSString, NSUUID;

@interface HMAccessoryCategory : NSObject <Swift>

{
    NSString *_categoryType;
    NSString *_name;
}

@property (copy, nonatomic) NSString *categoryType;
@property (copy, nonatomic) NSString *name;
@property (readonly) _Bool isWiFiRouterAccessoryCategory;
@property (readonly) _Bool isTelevisionAccessoryCategory;
@property (copy, nonatomic, readonly) NSString *localizedDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 name:(id)arg2;
- (id)dumpState;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;

@end
