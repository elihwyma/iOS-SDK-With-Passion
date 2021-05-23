/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface CMAnomalyEvent : NSObject

{
    _Bool _acknowledgement;
    long long _state;
    long long _response;
    long long _resolution;
    double _absoluteTimestamp;
    unsigned long long _identifier;
}

@property (nonatomic) long long response;
@property (nonatomic) long long resolution;
@property (nonatomic, getter=isAcknowledgement) _Bool acknowledgement;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) long long state;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(unsigned long long)arg1 absoluteTimestamp:(double)arg2 state:(long long)arg3 response:(long long)arg4 resolution:(long long)arg5;
- (id)initWithIdentifier:(unsigned long long)arg1 absoluteTimestamp:(double)arg2 state:(long long)arg3 response:(long long)arg4 resolution:(long long)arg5 acknowledgement:(_Bool)arg6;

@end
