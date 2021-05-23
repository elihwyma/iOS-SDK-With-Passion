/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

@interface SiriCoreAceSerialization : NSObject

+ (id)dataForStreamHeaderWithCompressionType:(unsigned char)arg1;
+ (id)dataForPing:(unsigned int)arg1;
+ (id)dataForPong:(unsigned int)arg1;
+ (_Bool)tryParsingAceHeaderData:(id)arg1 compressionType:(unsigned char *)arg2 bytesRead:(unsigned long long *)arg3 error:(id *)arg4;
+ (_Bool)tryParsingPacketWithBytes:(const void *)arg1 length:(unsigned long long)arg2 rawPacket:(CDStruct_95d471ab *)arg3 object:(id *)arg4 bytesRead:(unsigned long long *)arg5 error:(id *)arg6;
+ (id)dataForObject:(id)arg1 error:(id *)arg2;
+ (id)dataForNop;
+ (id)dataForStreamEnd;
+ (id)dataForSpeechPacket:(id)arg1 error:(id *)arg2;
+ (id)_insufficientDataErrorForBytesNeeded:(unsigned long long)arg1 available:(unsigned long long)arg2;
+ (id)_tryParsingSpeechPacketBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)_tryParsingPlistPacketBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)aceDataForStreamHeaderWithCompressionType:(unsigned char)arg1;
+ (id)aceDataForObject:(id)arg1 error:(id *)arg2;
+ (id)aceDataForPing:(unsigned int)arg1;
+ (id)aceDataForPong:(unsigned int)arg1;
+ (id)aceDataForNop;
+ (id)aceDataForStreamEnd;
+ (id)aceDataForSpeechPacket:(id)arg1 error:(id *)arg2;

@end
