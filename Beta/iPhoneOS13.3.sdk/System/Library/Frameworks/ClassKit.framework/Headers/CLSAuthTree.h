/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSNumber;

@interface CLSAuthTree : NSObject

{
    NSMutableDictionary *_graph;
    NSNumber *_overridingStatus;
}

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_addNode:(id)arg1 parentStatusID:(id)arg2;
- (id)initWithOverridingStatus:(long long)arg1;
- (id)initWithStatus:(long long)arg1 statusID:(id)arg2 identifier:(id)arg3;
- (void)setAuthStatus:(long long)arg1 forIdentifier:(id)arg2 statusID:(id)arg3 parentStatusID:(id)arg4;
- (long long)authStatusAtIdentifierPath:(id)arg1;

@end
