/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface _TIInputContextEntry : NSObject

{
    NSString *_text;
    NSString *_senderIdentifier;
    NSDate *_timestamp;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *senderIdentifier;
@property (retain, nonatomic) NSDate *timestamp;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
