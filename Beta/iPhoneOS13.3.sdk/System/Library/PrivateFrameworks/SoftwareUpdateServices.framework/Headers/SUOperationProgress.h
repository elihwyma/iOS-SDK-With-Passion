/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SUOperationProgress : NSObject

{
    NSString *_phase;
    float _percentComplete;
    float _normalizedPercentComplete;
    double _timeRemaining;
    _Bool _isDone;
}

@property (retain, nonatomic) NSString *phase;
@property (nonatomic) float percentComplete;
@property (nonatomic) float normalizedPercentComplete;
@property (nonatomic) double timeRemaining;
@property (nonatomic) _Bool isDone;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
