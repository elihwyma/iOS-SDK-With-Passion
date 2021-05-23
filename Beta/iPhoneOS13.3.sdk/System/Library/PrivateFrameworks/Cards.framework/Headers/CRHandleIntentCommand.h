/*
 Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

#import <Cards/CRBasicPayloadCommand.h>

@class INIntent;

@interface CRHandleIntentCommand : CRBasicPayloadCommand

{
    INIntent *_intent;
}

@property (copy, nonatomic) INIntent *intent;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)payload;

@end
