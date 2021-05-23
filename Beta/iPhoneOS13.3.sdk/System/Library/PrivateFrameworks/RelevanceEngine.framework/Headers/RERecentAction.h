/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface RERecentAction : NSObject

{
    NSString *_bundleIdentifier;
    unsigned long long _actionIdentifier;
}

@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) unsigned long long actionIdentifier;

+ (id)actionWithBundleIdentifier:(id)arg1 actionIdentifier:(unsigned long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
