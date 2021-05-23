/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSNumber, NSString;

@interface SACFPEXItem : AceObject <Swift>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *itemSource;
@property (copy, nonatomic) NSNumber *score;
@property (copy, nonatomic) NSString *sourceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)item;
+ (id)itemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
