/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAAceView.h>

@class SAResultObjectReference;

@interface SAResultReferenceWrapper : SAAceView

@property (retain, nonatomic) SAResultObjectReference *resultReference;

+ (id)resultReferenceWrapper;
+ (id)resultReferenceWrapperWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
