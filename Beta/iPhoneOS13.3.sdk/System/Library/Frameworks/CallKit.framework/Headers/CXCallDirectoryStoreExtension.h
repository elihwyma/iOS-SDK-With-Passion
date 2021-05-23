/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface CXCallDirectoryStoreExtension : NSObject

{
    NSString *_identifier;
    long long _primaryKey;
    long long _priority;
    long long _state;
    NSDate *_stateLastModified;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long primaryKey;
@property (nonatomic) long long priority;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSDate *stateLastModified;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
