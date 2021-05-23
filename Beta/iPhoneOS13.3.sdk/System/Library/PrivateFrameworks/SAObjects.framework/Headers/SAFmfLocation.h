/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SALocation.h>

@class NSNumber, SAPersonAttribute;

@interface SAFmfLocation : SALocation

@property (copy, nonatomic) NSNumber *distance;
@property (retain, nonatomic) SAPersonAttribute *friend;
@property (copy, nonatomic) NSNumber *locationDate;

+ (id)location;
+ (id)locationWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
