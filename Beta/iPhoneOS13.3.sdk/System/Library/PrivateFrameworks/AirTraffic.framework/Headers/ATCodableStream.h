/*
 Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <Foundation/NSObject.h>

@class MSVStreamReader, MSVStreamWriter, NSFileHandle, NSInputStream;

@protocol OS_dispatch_queue;

@interface ATCodableStream : NSObject

{
    MSVStreamReader *_reader;
    MSVStreamWriter *_writer;
    NSObject<OS_dispatch_queue> *_queue;
    NSInputStream *_inputStream;
    NSFileHandle *_fileHandleForReading;
}

@property (nonatomic, readonly) NSInputStream *inputStream;
@property (nonatomic, readonly) NSFileHandle *fileHandleForReading;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInputStream:(id)arg1;

@end
