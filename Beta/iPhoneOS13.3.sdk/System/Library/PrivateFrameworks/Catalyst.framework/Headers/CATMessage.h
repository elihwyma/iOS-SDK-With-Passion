/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@class NSUUID;

@interface CATMessage : NSObject

{
    NSUUID *_messageUUID;
}

@property (retain, nonatomic) id cat_assertion;
@property (retain, nonatomic) NSUUID *messageUUID;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
