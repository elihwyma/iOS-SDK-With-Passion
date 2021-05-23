/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface TPSURLAction : NSObject

{
    NSString *_text;
    NSURL *_URL;
}

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSURL *URL;

+ (_Bool)supportsSecureCoding;
+ (id)classSet;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
