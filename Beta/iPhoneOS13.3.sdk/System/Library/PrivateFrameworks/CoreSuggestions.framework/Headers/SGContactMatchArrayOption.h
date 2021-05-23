/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class NSArray, SGRecordId;

@interface SGContactMatchArrayOption : NSObject

{
    unsigned long long _type;
    NSArray *_matches;
    SGRecordId *_recordId;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSArray *matches;
@property (nonatomic, readonly) SGRecordId *recordId;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMatches:(id)arg1;
- (id)initWithRecordId:(id)arg1;
- (_Bool)isEqualToContactMatchArrayOption:(id)arg1;

@end
