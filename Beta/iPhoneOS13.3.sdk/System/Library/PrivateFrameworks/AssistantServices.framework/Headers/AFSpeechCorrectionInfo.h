/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSString;

@interface AFSpeechCorrectionInfo : NSObject <Swift>

{
    long long _alternativeSelectionCount;
    long long _characterModificationCount;
    NSString *_correctedText;
}

@property (nonatomic) long long alternativeSelectionCount;
@property (nonatomic) long long characterModificationCount;
@property (copy, nonatomic) NSString *correctedText;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
