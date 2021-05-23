/*
 Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <AirTraffic/ATMessage.h>

@class NSString;

@interface ATRequest : ATMessage

{
    NSString *_command;
    NSString *_dataClass;
}

@property (copy, nonatomic) NSString *command;
@property (copy, nonatomic) NSString *dataClass;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)additionalDescription;
- (id)initWithCommand:(id)arg1 dataClass:(id)arg2 parameters:(id)arg3;
- (id)responseWithError:(id)arg1 parameters:(id)arg2;
- (id)partialResponseWithParameters:(id)arg1;

@end
