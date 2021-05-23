/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

#import <Silex/Swift-Protocol.h>

@class NSString;

@interface SXFontAttributes : NSObject <Swift>

{
    NSString *_familyName;
    long long _weight;
    long long _width;
    long long _style;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, readonly) long long weight;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) long long width;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFamilyName:(id)arg1 weight:(long long)arg2 width:(long long)arg3 style:(long long)arg4;
- (id)stringForWeight:(long long)arg1;
- (id)stringForWidth:(long long)arg1;
- (id)stringForStyle:(long long)arg1;

@end
