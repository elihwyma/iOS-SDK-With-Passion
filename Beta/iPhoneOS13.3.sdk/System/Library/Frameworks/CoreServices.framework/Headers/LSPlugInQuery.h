/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSQuery.h>

@interface LSPlugInQuery : _LSQuery

+ (_Bool)supportsSecureCoding;
+ (id)pluginQuery;
+ (id)pluginQueryWithQueryDictionary:(id)arg1 applyFilter:(CDUnknownBlockType)arg2;
+ (id)pluginQueryWithUUID:(id)arg1;
+ (id)pluginQueryWithIdentifier:(id)arg1;
+ (id)pluginQueryWithURL:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)sort:(_Bool)arg1 pluginIDs:(id)arg2 andYield:(CDUnknownBlockType)arg3 context:(struct LSContext *)arg4;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)_requiresDatabaseMappingEntitlement;

@end
