/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@interface SGRealtimeSuggestionMock : NSObject

+ (id)loadFromFile:(id)arg1 error:(id *)arg2;
+ (id)parseJson:(id)arg1 error:(id *)arg2;
+ (id)parseData:(id)arg1 error:(id *)arg2;
+ (id)contactDetailsFromData:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)dateFromObject:(id)arg1 error:(id *)arg2;
+ (id)createSuggestion:(id)arg1 error:(id *)arg2;
+ (id)createRealtimeContact:(id)arg1 error:(id *)arg2;
+ (id)createRealtimeEvent:(id)arg1 error:(id *)arg2;
+ (_Bool)isMockSuggestion:(id)arg1;
+ (id)originFromRecordId:(id)arg1;
+ (id)contactMatchesWithContact:(id)arg1;
+ (void)cleanupAfterMockSuggestion:(id)arg1;

@end
