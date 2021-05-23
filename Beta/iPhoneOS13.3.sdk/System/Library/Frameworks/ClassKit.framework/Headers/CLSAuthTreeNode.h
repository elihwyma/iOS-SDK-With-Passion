/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CLSAuthTreeNode : NSObject

{
    NSString *_statusID;
    NSString *_identifier;
    long long _status;
}

@property (copy, nonatomic, readonly) NSString *statusID;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long status;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatusID:(id)arg1 identifier:(id)arg2 status:(long long)arg3;

@end
