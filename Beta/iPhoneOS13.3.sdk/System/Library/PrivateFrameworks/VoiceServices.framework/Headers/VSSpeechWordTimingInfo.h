/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@interface VSSpeechWordTimingInfo : NSObject

{
    double _startTime;
    struct _NSRange _textRange;
}

@property (nonatomic) double startTime;
@property (nonatomic) struct _NSRange textRange;

+ (_Bool)supportsSecureCoding;
+ (unsigned long long)extraBytesFromUTF8ToUTF16With:(const char *)arg1 totalLength:(unsigned long long)arg2 begin:(unsigned long long)arg3 end:(unsigned long long)arg4;
+ (id)wordTimingInfoFrom:(id)arg1 timestamps:(id)arg2;
+ (id)utf16TimingInfoWithUTF8Range:(id)arg1 withText:(id)arg2;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
