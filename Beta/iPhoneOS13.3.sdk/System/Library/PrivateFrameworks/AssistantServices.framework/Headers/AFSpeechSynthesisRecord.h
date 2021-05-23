/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSString;

@interface AFSpeechSynthesisRecord : NSObject <Swift>

{
    NSString *_utterance;
    unsigned long long _beginTimestamp;
    unsigned long long _endTimestamp;
}

@property (copy, nonatomic, readonly) NSString *utterance;
@property (nonatomic, readonly) unsigned long long beginTimestamp;
@property (nonatomic, readonly) unsigned long long endTimestamp;

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;
- (id)initWithUtterance:(id)arg1 beginTimestamp:(unsigned long long)arg2 endTimestamp:(unsigned long long)arg3;

@end
