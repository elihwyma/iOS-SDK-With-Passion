/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

#import <PencilKit/Swift-Protocol.h>

@class NSString;

@interface PKInkKey : NSObject <Swift>

{
    NSString *_identifier;
    unsigned long long _version;
    NSString *_variant;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long version;
@property (copy, nonatomic, readonly) NSString *variant;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 version:(unsigned long long)arg2 variant:(id)arg3;

@end
