/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSURL, SAHAAction;

@interface SAHASceneAction : SADomainObject

@property (retain, nonatomic) SAHAAction *action;
@property (copy, nonatomic) NSURL *entityId;

+ (id)sceneAction;
+ (id)sceneActionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
