/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/LSPlugInQuery.h>

@class NSURL;

@interface LSPlugInQueryWithURL : LSPlugInQuery

{
    NSURL *_bundleURL;
}

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithURL:(id)arg1;
- (id)_bundleURL;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
