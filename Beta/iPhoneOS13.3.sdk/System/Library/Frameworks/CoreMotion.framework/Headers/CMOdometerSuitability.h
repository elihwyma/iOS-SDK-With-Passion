/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface CMOdometerSuitability : NSObject

{
    _Bool _suitableForRunning;
    _Bool _suitableForWalking;
    NSDate *_startDate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) _Bool suitableForRunning;
@property (nonatomic, readonly) _Bool suitableForWalking;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)binarySampleRepresentation;
- (id)initWithStartDate:(id)arg1 suitableForRunning:(_Bool)arg2 suitableForWalking:(_Bool)arg3;

@end
