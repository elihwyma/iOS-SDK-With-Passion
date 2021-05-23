/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSDate, NSNumber;

@interface SAPhoneSearch : SADomainCommand

@property (copy, nonatomic) NSArray *contacts;
@property (copy, nonatomic) NSDate *end;
@property (copy, nonatomic) NSNumber *faceTime;
@property (copy, nonatomic) NSNumber *faceTimeAudio;
@property (copy, nonatomic) NSNumber *isNew;
@property (copy, nonatomic) NSNumber *last;
@property (copy, nonatomic) NSNumber *missed;
@property (copy, nonatomic) NSNumber *outgoing;
@property (copy, nonatomic) NSDate *start;
@property (copy, nonatomic) NSNumber *voiceMail;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
