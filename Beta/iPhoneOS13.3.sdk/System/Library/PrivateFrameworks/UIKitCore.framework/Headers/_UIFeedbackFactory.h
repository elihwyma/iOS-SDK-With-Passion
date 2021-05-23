/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _UIFeedbackFactory : NSObject

{
    NSDictionary *_customFeedbacksArchiveContents;
    NSDictionary *_customDiscreteFeedbacks;
    NSDictionary *_customContinuousFeedbacks;
    NSString *_localIdentifier;
}

@property (retain, nonatomic) NSDictionary *customDiscreteFeedbacks;
@property (retain, nonatomic) NSDictionary *customContinuousFeedbacks;
@property (retain, nonatomic) NSString *localIdentifier;
@property (nonatomic, readonly) NSArray *discreteFeedbackIdentifiers;
@property (nonatomic, readonly) NSArray *continuousFeedbackIdentifiers;
@property (nonatomic, readonly) NSDictionary *customFeedbacksArchiveContents;

+ (id)sharedFactory;

- (id)identifierForDiscreteFeedbackType:(long long)arg1;
- (id)identifierForContinuousFeedbackType:(long long)arg1;
- (id)titleForFeedbackWithIdentifier:(id)arg1;
- (long long)_discreteFeedbackTypeFromIdentifier:(id)arg1;
- (long long)_continuousFeedbackTypeFromIdentifier:(id)arg1;
- (id)_patternIdentifierFromIdentifier:(id)arg1;
- (_Bool)_customEventType:(unsigned long long *)arg1 andSystemSoundID:(unsigned int *)arg2 fromIdentifier:(id)arg3;
- (id)discreteFeedbackWithIdentifier:(id)arg1;
- (id)continuousFeedbackWithIdentifier:(id)arg1;
- (id)identifierForLocalPatternFeedbackWithName:(id)arg1;
- (id)identifierForCustomDiscreteFeedbackWithEventType:(unsigned long long)arg1 systemSoundID:(unsigned int)arg2;
- (id)identifierForPatternFeedbackWithFilename:(id)arg1;
- (id)feedbackWithIdentifier:(id)arg1;
- (void)performWithLocalIdentifier:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)addLocalPatterns:(id)arg1;

@end
