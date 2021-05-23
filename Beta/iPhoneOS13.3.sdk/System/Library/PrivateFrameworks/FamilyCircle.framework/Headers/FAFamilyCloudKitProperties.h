/*
 Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface FAFamilyCloudKitProperties : NSObject

{
    NSDictionary *_dictionary;
}

@property (copy, nonatomic, readonly) NSDictionary *dictionary;
@property (copy, nonatomic, readonly) NSString *bundleID;
@property (copy, nonatomic, readonly) NSString *participantID;
@property (copy, nonatomic, readonly) NSString *shareID;
@property (copy, nonatomic, readonly) NSString *zoneID;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end
