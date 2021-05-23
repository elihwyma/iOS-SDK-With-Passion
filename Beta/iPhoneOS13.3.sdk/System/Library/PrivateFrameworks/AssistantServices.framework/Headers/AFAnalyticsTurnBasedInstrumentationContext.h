/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSUUID, SISchemaClientTurnContext;

@interface AFAnalyticsTurnBasedInstrumentationContext : NSObject <Swift>

{
    struct NSUUID *_turnIdentifier;
    SISchemaClientTurnContext *_turnContext;
}

@property (nonatomic, readonly) NSUUID *turnIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)newTurnBasedContextWithPreviousTurnID:(struct NSUUID *)arg1;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTurnIdentifier:(struct NSUUID *)arg1;
- (void)emitInstrumentation:(id)arg1;
- (void)emitInstrumentation:(id)arg1 machAbsoluteTime:(unsigned long long)arg2;
- (id)nextTurnBasedContext;

@end
