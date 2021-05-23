/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAceView.h>

@class NSString;

@protocol SAClientBoundCommand;

@interface SAARParaphrasedAlternativeResult : SAAceView

@property (retain, nonatomic) id <SAClientBoundCommand> command;
@property (copy, nonatomic) NSString *displayText;
@property (copy, nonatomic) NSString *paraphrasedIntent;

+ (id)paraphrasedAlternativeResult;
+ (id)paraphrasedAlternativeResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
