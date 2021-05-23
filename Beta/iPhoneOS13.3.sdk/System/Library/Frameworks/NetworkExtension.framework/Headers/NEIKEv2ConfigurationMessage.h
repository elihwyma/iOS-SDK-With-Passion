/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface NEIKEv2ConfigurationMessage : NSObject

{
    unsigned long long _configurationType;
    NSArray *_attributes;
}

@property unsigned long long configurationType;
@property (retain) NSArray *attributes;

+ (id)copyConfigurationForRequest:(id)arg1 reply:(id)arg2;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initWithWithAttributes:(id)arg1;

@end
