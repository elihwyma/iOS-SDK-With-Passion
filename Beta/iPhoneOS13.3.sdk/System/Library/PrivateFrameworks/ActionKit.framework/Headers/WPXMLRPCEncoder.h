/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSFileHandle, NSNumber, NSString;

@interface WPXMLRPCEncoder : NSObject

{
    NSString *_method;
    NSArray *_parameters;
    NSFileHandle *_streamingCacheFile;
    _Bool _isResponse;
    _Bool _isFault;
    NSNumber *_faultCode;
    NSString *_faultString;
}

@property (nonatomic, readonly) NSString *method;
@property (nonatomic, readonly) NSArray *parameters;
@property (nonatomic, readonly) NSData *body;

- (id)init;
- (void)appendString:(id)arg1;
- (void)appendFormat:(id)arg1;
- (void)encodeObject:(id)arg1;
- (void)encodeData:(id)arg1;
- (id)initWithMethod:(id)arg1 andParameters:(id)arg2;
- (id)initWithResponseParams:(id)arg1;
- (id)initWithResponseFaultCode:(id)arg1 andString:(id)arg2;
- (id)dataEncodedWithError:(id *)arg1;
- (_Bool)encodeToFile:(id)arg1 error:(id *)arg2;
- (void)encodeForStreaming;
- (void)valueTag:(id)arg1 value:(id)arg2;
- (void)encodeArray:(id)arg1;
- (void)encodeDictionary:(id)arg1;
- (void)encodeBoolean:(struct __CFBoolean *)arg1;
- (void)encodeNumber:(id)arg1;
- (void)encodeString:(id)arg1 omitTag:(_Bool)arg2;
- (void)encodeDate:(id)arg1;
- (void)encodeInputStream:(id)arg1;
- (void)encodeFileHandle:(id)arg1;
- (id)tmpFilePathForCache;

@end
