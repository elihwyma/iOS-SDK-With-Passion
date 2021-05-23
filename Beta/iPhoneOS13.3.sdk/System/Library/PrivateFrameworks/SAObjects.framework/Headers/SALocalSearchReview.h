/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, SACalendar, SALocalSearchRating, SAUIAppPunchOut;

@interface SALocalSearchReview : AceObject <Swift>

@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *comment;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) SACalendar *lastUpdated;
@property (copy, nonatomic) NSString *publication;
@property (retain, nonatomic) SAUIAppPunchOut *reviewPunchOut;
@property (retain, nonatomic) SALocalSearchRating *reviewRating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)review;
+ (id)reviewWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
