/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class NSArray;

@interface SALocalSearchMapViewport : SADomainObject

@property (nonatomic) double eastLongitude;
@property (nonatomic) double northLatitude;
@property (nonatomic) double southLatitude;
@property (nonatomic) double timeInSecondsSinceViewportChanged;
@property (nonatomic) double timeInSecondsSinceViewportEnteredForeground;
@property (copy, nonatomic) NSArray *vertices;
@property (nonatomic) double westLongitude;

+ (id)mapViewport;
+ (id)mapViewportWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
