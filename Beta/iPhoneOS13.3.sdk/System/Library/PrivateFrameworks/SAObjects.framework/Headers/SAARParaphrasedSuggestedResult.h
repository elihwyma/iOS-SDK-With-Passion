/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAceView.h>

@class NSString;

@protocol SAClientBoundCommand;

@interface SAARParaphrasedSuggestedResult : SAAceView

@property (retain, nonatomic) id <SAClientBoundCommand> command;
@property (copy, nonatomic) NSString *displayText;
@property (nonatomic) long long rank;

+ (id)paraphrasedSuggestedResult;
+ (id)paraphrasedSuggestedResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
