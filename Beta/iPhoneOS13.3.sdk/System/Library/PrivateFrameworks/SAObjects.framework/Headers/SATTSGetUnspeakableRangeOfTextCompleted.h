/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SATTSGetUnspeakableRangeOfTextCompleted : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *results;

+ (id)getUnspeakableRangeOfTextCompleted;
+ (id)getUnspeakableRangeOfTextCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
