/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CKSnapshotCacheKey : NSObject

{
    NSString *_identifier;
    long long _interfaceStyle;
    struct CGRect _bounds;
}

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long interfaceStyle;
@property (nonatomic) struct CGRect bounds;
@property (nonatomic, readonly) NSString *stringValue;

+ (id)keyWithIdentifier:(id)arg1 interfaceStyle:(long long)arg2 bounds:(struct CGRect)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)keyWithOppositeInterfaceStyle;
- (id)initWithIdentifier:(id)arg1 interfaceStyle:(long long)arg2 bounds:(struct CGRect)arg3;

@end
