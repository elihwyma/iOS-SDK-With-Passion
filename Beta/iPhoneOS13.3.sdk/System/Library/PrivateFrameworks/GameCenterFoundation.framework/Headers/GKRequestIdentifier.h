/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface GKRequestIdentifier : NSObject

{
    unsigned long long _savedHash;
    SEL _selector;
    NSArray *_arguments;
}

+ (id)requestIdentifierForInvocation:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithInvocation:(id)arg1;
- (id)_argumentsForInvocation:(id)arg1;

@end
