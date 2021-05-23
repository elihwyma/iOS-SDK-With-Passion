/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIIdentifierDifferMovePair : NSObject <Swift>

{
    long long _fromIndex;
    long long _toIndex;
}

@property (nonatomic) long long fromIndex;
@property (nonatomic) long long toIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (id)initWithFromIndex:(long long)arg1 toIndex:(long long)arg2;

@end
