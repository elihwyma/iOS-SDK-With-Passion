/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface HMUserCameraAccess : NSObject

{
    unsigned long long _value;
}

@property (nonatomic, readonly) NSNumber *number;
@property (nonatomic, readonly) unsigned long long value;

+ (id)accessWithNumber:(id)arg1;
+ (id)accessWithValue:(unsigned long long)arg1;
+ (id)accessWithMessage:(id)arg1;
+ (id)accessWithDict:(id)arg1;
+ (id)accessWithCoder:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithNumber:(id)arg1;
- (void)addToCoder:(id)arg1;
- (void)addToPayload:(id)arg1;

@end
