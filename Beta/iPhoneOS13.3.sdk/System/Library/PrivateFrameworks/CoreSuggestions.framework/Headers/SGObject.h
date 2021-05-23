/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class SGOrigin, SGRecordId;

@interface SGObject : NSObject

{
    SGRecordId *_recordId;
    SGOrigin *_origin;
}

@property (nonatomic, readonly) SGRecordId *recordId;
@property (nonatomic, readonly) SGOrigin *origin;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordId:(id)arg1 origin:(id)arg2;
- (_Bool)isEqualToSuggestion:(id)arg1;

@end
