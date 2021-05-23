/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface VNBlacklist : NSObject

{
    NSSet *_identifiers;
}

@property (readonly) unsigned long long identifierCount;
@property (copy, readonly) NSSet *allIdentifiers;

+ (id)blacklistFromUTF8StringArray:(const char **)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifiers:(id)arg1;
- (_Bool)containsIdentifier:(id)arg1;

@end
