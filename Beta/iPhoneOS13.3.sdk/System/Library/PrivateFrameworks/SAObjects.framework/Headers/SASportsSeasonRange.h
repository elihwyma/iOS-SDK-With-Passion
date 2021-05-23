/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSDate, NSString;

@interface SASportsSeasonRange : AceObject <Swift>

@property (copy, nonatomic) NSDate *end;
@property (copy, nonatomic) NSString *seasonType;
@property (copy, nonatomic) NSDate *start;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)seasonRange;
+ (id)seasonRangeWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
