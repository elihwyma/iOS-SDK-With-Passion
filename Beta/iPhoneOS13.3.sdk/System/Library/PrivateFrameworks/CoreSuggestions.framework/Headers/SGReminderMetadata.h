/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class NSString, SGRecordId;

@interface SGReminderMetadata : NSObject

{
    SGRecordId *_recordId;
    NSString *_sourceUniqueIdentifier;
}

@property (nonatomic, readonly) SGRecordId *recordId;
@property (nonatomic, readonly) NSString *sourceUniqueIdentifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordId:(id)arg1 sourceUniqueIdentifier:(id)arg2;
- (_Bool)isEqualToReminderMetadata:(id)arg1;

@end
