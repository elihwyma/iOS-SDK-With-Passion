/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXFontAttributes.h>

#import <Silex/Swift-Protocol.h>

@class NSString;

@interface SXTextSourceFontAttributes : SXFontAttributes <Swift>

{
    NSString *_familyName;
    long long _style;
    long long _weight;
    long long _width;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, readonly) long long weight;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) long long width;

+ (id)attributesWithFamilyName:(id)arg1 style:(long long)arg2 weight:(long long)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
