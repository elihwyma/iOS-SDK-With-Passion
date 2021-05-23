/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString;

@interface SASTTSSelectionStatistics : SABaseCommand <Swift>

@property (copy, nonatomic) NSString *completionType;
@property (copy, nonatomic) NSString *interactionId;
@property (copy, nonatomic) NSArray *listenedItems;
@property (nonatomic) long long selectedItemIndex;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSArray *timesListened;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)tTSSelectionStatistics;
+ (id)tTSSelectionStatisticsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
