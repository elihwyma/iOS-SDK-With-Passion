/*
 Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface MSCMSAppleHashAgilityAttribute : NSObject

{
    NSData *_hashAgilityValue;
}

@property (retain, readonly) NSData *hashAgilityValue;

- (id)encodeAttributeWithError:(id *)arg1;
- (id)initWithAttribute:(id)arg1 error:(id *)arg2;
- (id)initWithHashAgilityValue:(id)arg1;

@end
