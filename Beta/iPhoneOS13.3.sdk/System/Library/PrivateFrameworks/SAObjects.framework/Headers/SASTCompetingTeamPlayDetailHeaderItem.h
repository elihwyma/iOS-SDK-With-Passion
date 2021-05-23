/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, SAUIDecoratedText;

@interface SASTCompetingTeamPlayDetailHeaderItem : AceObject <Swift>

@property (retain, nonatomic) SAUIDecoratedText *firstTeam;
@property (retain, nonatomic) SAUIDecoratedText *secondTeam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)competingTeamPlayDetailHeaderItem;
+ (id)competingTeamPlayDetailHeaderItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
