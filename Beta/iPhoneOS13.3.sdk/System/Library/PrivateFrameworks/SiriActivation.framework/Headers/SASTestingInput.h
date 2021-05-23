/*
 Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface SASTestingInput : NSObject

{
    long long _type;
    NSString *_text;
    NSURL *_recordedSpeechURL;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSURL *recordedSpeechURL;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
