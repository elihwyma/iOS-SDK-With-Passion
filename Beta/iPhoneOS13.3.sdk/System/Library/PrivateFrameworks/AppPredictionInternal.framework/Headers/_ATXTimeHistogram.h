/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface _ATXTimeHistogram : NSObject

{
    unsigned int _count;
    struct {
        double _field1;
        unsigned int _field2;
        unsigned short _field3;
    } *_entries;
    unsigned short _bucketCount;
    _Bool _applyFilter;
}

@property (nonatomic, readonly) unsigned short pointsPerTimeInterval;
@property (nonatomic, readonly) _Bool applyFilter;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)enumerate:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
