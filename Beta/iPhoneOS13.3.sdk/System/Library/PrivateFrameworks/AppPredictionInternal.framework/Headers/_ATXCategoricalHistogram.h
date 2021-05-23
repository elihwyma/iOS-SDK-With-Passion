/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface _ATXCategoricalHistogram : NSObject

{
    unsigned int _count;
    unsigned int _capacity;
    struct {
        double _field1;
        unsigned int _field2;
        unsigned int _field3;
    } *_entries;
    NSDictionary *_lastDates;
}

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)enumerate:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)getLastDatesByCategoryId;

@end
