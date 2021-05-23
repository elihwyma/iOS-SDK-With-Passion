/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <NSObject.h>

@class NSArray;

@interface PPExtractionSet : NSObject

{
    NSArray *_namedEntityRecords;
    NSArray *_topicRecords;
}

@property (nonatomic, readonly) NSArray *namedEntityRecords;
@property (nonatomic, readonly) NSArray *topicRecords;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEmpty;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)merge:(id)arg1;
- (id)initWithNamedEntityRecords:(id)arg1 topicRecords:(id)arg2;

@end
