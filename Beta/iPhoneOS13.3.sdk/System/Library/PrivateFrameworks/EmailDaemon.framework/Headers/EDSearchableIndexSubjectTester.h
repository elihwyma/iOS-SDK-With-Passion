/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface EDSearchableIndexSubjectTester : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *fetchAttributes;

- (id)transformDataForVerification:(id)arg1;
- (id)expressionFromDataSamples:(id)arg1;
- (_Bool)verifySearchableItem:(id)arg1 againstExpectedData:(id)arg2;

@end
