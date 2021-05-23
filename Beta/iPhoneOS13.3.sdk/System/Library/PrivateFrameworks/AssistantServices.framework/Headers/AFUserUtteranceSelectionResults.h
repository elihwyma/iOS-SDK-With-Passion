/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSNumber, NSString;

@interface AFUserUtteranceSelectionResults : NSObject <Swift>

{
    NSNumber *_combinedRank;
    NSNumber *_combinedScore;
    NSString *_interactionId;
    NSNumber *_onDeviceUtterancesPresent;
    NSNumber *_originalRank;
    NSNumber *_originalScore;
    NSString *_previousUtterance;
    NSString *_sessionId;
    NSString *_utteranceSource;
}

@property (copy, nonatomic) NSNumber *combinedRank;
@property (copy, nonatomic) NSNumber *combinedScore;
@property (copy, nonatomic) NSString *interactionId;
@property (copy, nonatomic) NSNumber *onDeviceUtterancesPresent;
@property (copy, nonatomic) NSNumber *originalRank;
@property (copy, nonatomic) NSNumber *originalScore;
@property (copy, nonatomic) NSString *previousUtterance;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *utteranceSource;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
