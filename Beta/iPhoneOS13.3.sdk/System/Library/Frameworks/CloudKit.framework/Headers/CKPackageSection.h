/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSData;

@interface CKPackageSection : NSObject

{
    long long _index;
    NSData *_signature;
    unsigned long long _size;
}

@property (nonatomic, readonly) long long index;
@property (nonatomic, readonly) NSData *signature;
@property (nonatomic) unsigned long long size;

- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithIndex:(long long)arg1 signature:(id)arg2 size:(unsigned long long)arg3;

@end
