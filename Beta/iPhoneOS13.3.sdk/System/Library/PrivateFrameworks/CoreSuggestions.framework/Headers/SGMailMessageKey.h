/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SGMailMessageKey : NSObject

{
    NSString *_source;
    NSString *_messageId;
}

@property (nonatomic, readonly) NSString *source;
@property (nonatomic, readonly) NSString *messageId;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1 messageId:(id)arg2;
- (_Bool)isEqualToMailMessageKey:(id)arg1;

@end
