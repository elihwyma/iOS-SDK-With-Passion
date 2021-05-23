/*
 Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, NSUUID;

@interface _DECItem : NSObject

{
    NSUUID *_identifier;
    NSMutableDictionary *_metadata;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSMutableDictionary *metadata;

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)category;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEquivalent:(id)arg1;
- (_Bool)isEqualToItem:(id)arg1;

@end
