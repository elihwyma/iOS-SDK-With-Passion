/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <NetworkExtension/NEFileHandle.h>

@class NSString;

@interface NEPolicySessionFileHandle : NEFileHandle

{
    NSString *_name;
}

@property (readonly) NSString *name;

- (id)description;
- (unsigned long long)type;
- (id)dictionary;
- (id)initFromDictionary:(id)arg1;
- (id)initWithPolicySession:(id)arg1 name:(id)arg2;
- (id)initWithPolicySession:(id)arg1;

@end
