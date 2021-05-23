/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString;

@interface SACreateVOXListItem : AceObject <Swift>

@property (copy, nonatomic) NSArray *displayHints;
@property (copy, nonatomic) NSString *speakableInSequence;
@property (copy, nonatomic) NSString *speakableStandalone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)createVOXListItem;
+ (id)createVOXListItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
