/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <NSObject.h>

@class NSNumber;

@interface ATXHeuristicObjectHandle : NSObject

{
    NSNumber *_deviceHandle;
    NSNumber *_objHandle;
    id _obj;
}

@property (nonatomic, readonly) id obj;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1 wrapping:(id)arg2;

@end
