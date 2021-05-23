/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString, SASendCommands;

@interface SAUIAddViews : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *dialogPhase;
@property (copy, nonatomic) NSString *displayTarget;
@property (nonatomic) _Bool mutatingCommand;
@property (retain, nonatomic) SASendCommands *refreshCommand;
@property (nonatomic) _Bool requiresResponse;
@property (nonatomic) _Bool scrollToTop;
@property (nonatomic) _Bool temporary;
@property (copy, nonatomic) NSArray *views;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *callbacks;

+ (id)addViews;
+ (id)addViewsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
