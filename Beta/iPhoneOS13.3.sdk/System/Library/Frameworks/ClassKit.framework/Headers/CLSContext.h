/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <ClassKit/CLSObject.h>

@class CLSActivity, NSArray, NSString, NSURL;

@interface CLSContext : CLSObject

{
    _Bool _active;
    NSURL *_universalLinkURL;
    NSString *_title;
    NSString *_topic;
    NSArray *_path;
    NSString *_currentActivityID;
    NSString *_contentStoreIdentifier;
    long long _displayOrder;
    NSString *_identifier;
    long long _type;
    NSString *_storeIdentifier;
    NSString *_storeTeamID;
    long long _authorizationStatus;
    NSString *_stableObjectID;
}

@property (nonatomic, readonly) CLSActivity *currentActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *storeTeamID;
@property (copy, nonatomic) NSString *currentActivityID;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *path;
@property (nonatomic) long long authorizationStatus;
@property (copy, nonatomic) NSString *stableObjectID;
@property (copy, nonatomic) NSString *contentStoreIdentifier;
@property (retain, nonatomic) NSURL *universalLinkURL;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long displayOrder;
@property (copy, nonatomic) NSString *topic;
@property (nonatomic, readonly, getter=isActive) _Bool active;

+ (_Bool)conformsToProtocol:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)relations;
+ (id)reservedContextTypes;
+ (id)allowedTopics;
+ (id)objectIDPathFromIdentifierPath:(id)arg1;
+ (id)stableObjectIDPathFromIdentifierPath:(id)arg1;
+ (id)arrayOfStringClasses;

- (_Bool)conformsToProtocol:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)dictionaryRepresentation;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (void)removeFromParent;
- (void)becomeActive;
- (void)resignActive;
- (void)mergeWithObject:(id)arg1;
- (id)newItemProvider;
- (_Bool)validateObject:(id *)arg1;
- (id)initWithInternalType:(long long)arg1 identifier:(id)arg2 title:(id)arg3;
- (void)setPathAndGenerateObjectID:(id)arg1;
- (long long)effectiveAuthorizationStatus;
- (id)childContextWithIdentifier:(id)arg1;
- (void)addChildContext:(id)arg1;
- (id)createNewActivity;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 title:(id)arg3;
- (void)descendantMatchingIdentifierPath:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
