/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/LSPlugInQuery.h>

@class NSString;

@interface LSPlugInQueryWithIdentifier : LSPlugInQuery

{
    int _bindingMap;
    NSString *_identifier;
}

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_identifier;
- (_Bool)isBindingMapValid;
- (id)_initWithIdentifier:(id)arg1 inMap:(int)arg2;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
