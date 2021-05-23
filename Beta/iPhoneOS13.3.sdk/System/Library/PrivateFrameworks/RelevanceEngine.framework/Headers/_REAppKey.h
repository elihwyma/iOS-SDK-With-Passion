/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _REAppKey : NSObject

{
    _Bool _remote;
    NSString *_identifier;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _Bool remote;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 remote:(_Bool)arg2;

@end
