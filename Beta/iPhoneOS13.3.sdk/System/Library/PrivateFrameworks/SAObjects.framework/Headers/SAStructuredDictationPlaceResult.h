/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSData, NSString;

@interface SAStructuredDictationPlaceResult : AceObject <Swift>

@property (copy, nonatomic) NSString *placeResultType;
@property (copy, nonatomic) NSData *resultData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)structuredDictationPlaceResult;
+ (id)structuredDictationPlaceResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
