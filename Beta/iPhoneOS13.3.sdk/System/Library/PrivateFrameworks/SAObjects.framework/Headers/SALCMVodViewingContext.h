/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SALCMViewingContext.h>

@class NSDate;

@interface SALCMVodViewingContext : SALCMViewingContext

@property (copy, nonatomic) NSDate *originalEventStartTime;

+ (id)vodViewingContext;
+ (id)vodViewingContextWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
