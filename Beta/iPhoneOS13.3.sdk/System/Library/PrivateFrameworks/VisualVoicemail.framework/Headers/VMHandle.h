/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <Foundation/NSObject.h>

#import <VisualVoicemail/Swift-Protocol.h>

@class NSString;

@interface VMHandle : NSObject <Swift>

{
    long long _type;
    NSString *_value;
}

@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) NSString *value;

+ (_Bool)supportsSecureCoding;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id *)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandle:(id)arg1;
- (_Bool)isEqualToHandle:(id)arg1;
- (id)initWithType:(long long)arg1 value:(id)arg2;
- (id)archivedDataWithError:(id *)arg1;

@end
