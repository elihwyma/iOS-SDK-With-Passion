/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SALCMContent.h>

@class NSString;

@interface SALCMTvShow : SALCMContent

@property (copy, nonatomic) NSString *seriesName;

+ (id)tvShow;
+ (id)tvShowWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
