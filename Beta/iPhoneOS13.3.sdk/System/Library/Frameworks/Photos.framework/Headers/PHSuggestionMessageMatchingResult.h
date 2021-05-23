/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, PHSuggestion, PHSuggestionMessageContext;

@interface PHSuggestionMessageMatchingResult : NSObject

{
    PHSuggestion *_suggestion;
    PHSuggestionMessageContext *_messageContext;
    NSMutableDictionary *_scoreByCMMSuggestionMatchingType;
}

@property (retain, nonatomic) PHSuggestion *suggestion;
@property (retain, nonatomic) PHSuggestionMessageContext *messageContext;
@property (retain, nonatomic) NSMutableDictionary *scoreByCMMSuggestionMatchingType;

- (id)initWithSuggestion:(id)arg1 messageContext:(id)arg2;
- (void)registerMatchingType:(long long)arg1 weight:(double)arg2;
- (double)scoreForSuggestionMatchingType:(long long)arg1;

@end
