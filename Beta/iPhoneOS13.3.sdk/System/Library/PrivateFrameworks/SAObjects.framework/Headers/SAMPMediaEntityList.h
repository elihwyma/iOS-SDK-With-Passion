/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAbstractItemList.h>

@class SAMPCollection;

@interface SAMPMediaEntityList : SAAbstractItemList

@property (nonatomic) int mediaType;
@property (retain, nonatomic) SAMPCollection *parentCollection;

+ (id)mediaEntityList;
+ (id)mediaEntityListWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
