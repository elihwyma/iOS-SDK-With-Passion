/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/LSPlugInQuery.h>

@class NSArray, NSDictionary;

@interface LSPlugInQueryWithQueryDictionary : LSPlugInQuery

{
    NSDictionary *_queryDict;
    NSArray *_extensionIdentifiers;
    NSArray *_extensionPointIdentifiers;
    CDUnknownBlockType _filterBlock;
}

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)matchesPlugin:(unsigned int)arg1 pluginData:(const struct LSPluginData *)arg2 withDatabase:(id)arg3;
- (id)_queryDictionary;
- (id)_initWithQueryDictionary:(id)arg1 applyFilter:(CDUnknownBlockType)arg2;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
