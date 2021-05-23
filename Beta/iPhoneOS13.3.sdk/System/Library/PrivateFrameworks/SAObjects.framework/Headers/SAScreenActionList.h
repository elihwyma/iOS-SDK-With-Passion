/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAbstractItemList.h>

@class NSString, NSURL;

@interface SAScreenActionList : SAAbstractItemList

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *mainEntitySemanticData;
@property (copy, nonatomic) NSURL *viewId;

+ (id)list;
+ (id)listWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
