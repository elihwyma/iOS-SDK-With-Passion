/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface TBTileItemDescriptor : NSObject

{
    NSString *_etag;
    NSNumber *_key;
}

@property (retain, nonatomic) NSNumber *key;
@property (copy, nonatomic) NSString *etag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)tileItemDescriptorWithKey:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKey:(id)arg1 etag:(id)arg2;

@end
