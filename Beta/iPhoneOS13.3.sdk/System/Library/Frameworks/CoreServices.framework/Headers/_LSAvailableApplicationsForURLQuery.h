/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSQuery.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface _LSAvailableApplicationsForURLQuery : _LSQuery

{
    NSURL *_URL;
}

@property (copy, nonatomic, readonly) NSURL *URL;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)yieldBundles:(const vector_12da65de *)arg1 context:(struct LSContext *)arg2 block:(CDUnknownBlockType)arg3;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)_requiresDatabaseMappingEntitlement;

@end
