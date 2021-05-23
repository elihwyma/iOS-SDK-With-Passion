/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSURL;

@interface CRKResource : NSObject

{
    _Bool _zippedBundle;
    NSURL *_hostedURL;
}

@property (retain, nonatomic) NSURL *hostedURL;
@property (nonatomic, getter=isZippedBundle) _Bool zippedBundle;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithHostedURL:(id)arg1 isZippedBundle:(_Bool)arg2;
- (_Bool)isEqualToHostedResource:(id)arg1;

@end
