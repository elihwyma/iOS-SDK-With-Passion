/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

#import <CallKit/Swift-Protocol.h>

@class CXHandle, NSString;

@interface CXLabeledHandle : NSObject <Swift>

{
    CXHandle *_handle;
    NSString *_label;
}

@property (retain, nonatomic) CXHandle *handle;
@property (copy, nonatomic) NSString *label;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToLabeledHandle:(id)arg1;
- (id)initWithHandle:(id)arg1 label:(id)arg2;

@end
