/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, SADecoratedString, SAUINanoImageResource;

@interface SASTHeroImageItem : AceObject <Swift>

@property (retain, nonatomic) SADecoratedString *caption;
@property (copy, nonatomic) NSString *position;
@property (retain, nonatomic) SAUINanoImageResource *watchImageResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)heroImageItem;
+ (id)heroImageItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
