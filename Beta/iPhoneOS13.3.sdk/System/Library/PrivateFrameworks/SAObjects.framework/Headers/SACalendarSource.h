/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SASource.h>

@interface SACalendarSource : SASource

@property (nonatomic) _Bool strict;

+ (id)source;
+ (id)sourceWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
