/*
 Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <Foundation/NSObject.h>

@class ATCodableStream, NSDictionary, NSInputStream;

@interface ATMessage : NSObject

{
    unsigned int _messageID;
    unsigned int _sessionID;
    NSDictionary *_parameters;
    double _timestamp;
    NSInputStream *_dataStream;
    ATCodableStream *_stream;
}

@property (retain, nonatomic) ATCodableStream *stream;
@property (nonatomic) unsigned int messageID;
@property (nonatomic) unsigned int sessionID;
@property (retain, nonatomic) NSDictionary *parameters;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSInputStream *dataStream;
@property (nonatomic) unsigned int options;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)parameterForKey:(id)arg1;
- (id)additionalDescription;

@end
