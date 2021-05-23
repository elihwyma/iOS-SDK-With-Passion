/*
 Image: /System/Library/Frameworks/Messages.framework/Messages
 */

#import <Foundation/NSObject.h>

@class NSUUID;

@interface MSSession : NSObject

{
    NSUUID *_identifier;
}

@property (nonatomic, readonly) NSUUID *identifier;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end
