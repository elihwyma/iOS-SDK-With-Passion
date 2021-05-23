/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAPhoneCallSearchResult.h>

@class NSNumber;

@interface SAPhoneCallHistory : SAPhoneCallSearchResult

@property (copy, nonatomic) NSNumber *blocked;
@property (copy, nonatomic) NSNumber *callCount;
@property (copy, nonatomic) NSNumber *faceTime;
@property (copy, nonatomic) NSNumber *faceTimeAudio;
@property (copy, nonatomic) NSNumber *missed;
@property (copy, nonatomic) NSNumber *outgoing;

+ (id)callHistory;
+ (id)callHistoryWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
