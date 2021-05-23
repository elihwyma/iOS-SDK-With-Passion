/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@class NSError, NSString, NSUUID;

@interface WFResponse : NSObject

{
    NSUUID *_identifier;
    NSString *_type;
    NSError *_error;
    double _executionTime;
}

@property (nonatomic) double executionTime;
@property (readonly) NSUUID *identifier;
@property (readonly) NSString *type;
@property (retain, nonatomic) NSError *error;

+ (_Bool)supportsSecureCoding;
+ (id)responseWithIdentifier:(id)arg1 error:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 error:(id)arg2;

@end
